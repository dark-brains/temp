#!/bin/sh

ROLE_ARN="$1"

if [ -z "$ROLE_ARN" ]; then
  echo "echo \"<engine-api-role-arn> is empty.\""
  exit 1
fi

assume_role() {
    if ! JSON_CONTENT=$(aws sts assume-role --role-arn "${ROLE_ARN}" --role-session-name AssumeEngineApi --output json); then
      echo "echo \"Error in assume_role() function\""
      exit 1
    fi
}

set_credentials() {
  AWS_ACCESS_KEY_ID=$(echo "${JSON_CONTENT}" | yq -r '.Credentials.AccessKeyId')
  AWS_SECRET_ACCESS_KEY=$(echo "${JSON_CONTENT}" | yq -r '.Credentials.SecretAccessKey')
  AWS_SESSION_TOKEN=$(echo "${JSON_CONTENT}" | yq -r '.Credentials.SessionToken')

  if [ -z "$AWS_ACCESS_KEY_ID" ] || [ -z "$AWS_SECRET_ACCESS_KEY" ] || [ -z "$AWS_SESSION_TOKEN" ]; then
    echo "echo \"Error in set_credentials() function\""
    exit 1
  fi

  export AWS_ACCESS_KEY_ID
  export AWS_SECRET_ACCESS_KEY
  export AWS_SESSION_TOKEN
  if ! aws configure export-credentials --format env; then
    echo "echo \"Failed to export credentials\""
    exit 1
  fi

  FINAL_STS=$(aws sts get-caller-identity --output json)
  if [ -z "$FINAL_STS" ]; then
    echo "echo \"Failed to get caller identity\""
    exit 1
    else
      echo "echo \"$FINAL_STS\""
  fi
}

assume_role

set_credentials
