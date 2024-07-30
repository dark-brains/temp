#!/bin/sh

JSON_CONTENT=$(echo "$1" | base64 --decode)

if [ -z "$JSON_CONTENT" ]; then
  echo "echo \"<base64-encoded-json> content is empty.\""
  exit 1
fi

read_content() {
  if ! echo "$JSON_CONTENT" | yq -r '.' > /dev/null; then
    echo "echo \"No valid input provided\""
    exit 1
  fi
}

get_option() {
  CHILD_ROLE_ARN=$(echo "$JSON_CONTENT" | yq -r '.organization_account_access_role_arn // ""')
  if [ -n "$CHILD_ROLE_ARN" ]; then
    echo "echo \"Organization has child account\""
    HAS_CHILD_ACCOUNT=true
  else
    echo "echo \"Organization does not have a child account\""
    HAS_CHILD_ACCOUNT=false
  fi
}

assume_role() {
  ROLE_ARN="$1"
  SESSION_NAME="$2"
  EXTERNAL_ID=""
  TEMP_ROLE=""

  EXTERNAL_ID=$(echo "$JSON_CONTENT" | yq -r '.external_id')

  if [ -z "$ROLE_ARN" ]; then
    echo "echo \"Invalid or empty role ARN provided: $ROLE_ARN\""
    return 1
  fi

  echo "echo \"Attempting to assume role: $ROLE_ARN with external ID: $EXTERNAL_ID\""
  if ! TEMP_ROLE=$(aws sts assume-role --role-arn "${ROLE_ARN}" --role-session-name "${SESSION_NAME}" --external-id "${EXTERNAL_ID}" --query 'Credentials' --output json); then
    echo "echo \"Failed to assume role: $ROLE_ARN\""
    exit 1
  fi

  echo "echo \"Successfully assumed role: $ROLE_ARN\""
  set_credentials "$TEMP_ROLE"
}

set_credentials() {
  CREDENTIALS_JSON="$1"
  AWS_ACCESS_KEY_ID=$(echo "${CREDENTIALS_JSON}" | yq -r '.AccessKeyId')
  AWS_SECRET_ACCESS_KEY=$(echo "${CREDENTIALS_JSON}" | yq -r '.SecretAccessKey')
  AWS_SESSION_TOKEN=$(echo "${CREDENTIALS_JSON}" | yq -r '.SessionToken')

  export AWS_ACCESS_KEY_ID
  export AWS_SECRET_ACCESS_KEY
  export AWS_SESSION_TOKEN

  if ! aws configure export-credentials --format env; then
    echo "echo \"Failed to export credentials\""
    exit 1
  fi
}

assume_role_with_child() {
  C8R_ROLE_ARN=$(echo "$JSON_CONTENT" | yq -r '.role_arn')
  CLIENT_ROLE_ARN=$(echo "$JSON_CONTENT" | yq -r '.client_role_arn')

  assume_role "$C8R_ROLE_ARN" "AssumeC8RRole" || exit 1
  assume_role "$CLIENT_ROLE_ARN" "AssumeClientRole" || exit 1

  if [ "$HAS_CHILD_ACCOUNT" = true ] && [ -n "$CHILD_ROLE_ARN" ]; then
    assume_role "$CHILD_ROLE_ARN" "AssumeChildRole" || exit 1
  else
    echo "echo \"Skipping child role assumption as no child role ARN is present.\""
  fi
}

read_content
get_option
assume_role_with_child

if ! aws configure export-credentials --format env; then
  echo "echo \"Failed to export credentials\""
  exit 1
  else
    FINAL_STS=$(aws sts get-caller-identity --output json)
    echo "echo \"$FINAL_STS\""
fi
