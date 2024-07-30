#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f configure_engine_api.sh -o eac_mac 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[0]))
	"\136\175\076\365\112\377\024\362\341\056\135\323\033\015\251\177"
	"\141\046\357\331\253\205\222\064\074"
#define      tst2_z	19
#define      tst2	((&data[27]))
	"\335\370\007\075\272\172\312\350\054\334\231\005\236\252\100\322"
	"\235\010\145\153\265\024\177\053\252"
#define      date_z	1
#define      date	((&data[50]))
	"\357"
#define      shll_z	8
#define      shll	((&data[51]))
	"\321\124\235\050\331\356\313\247\257\337"
#define      rlax_z	1
#define      rlax	((&data[61]))
	"\210"
#define      xecc_z	15
#define      xecc	((&data[63]))
	"\240\056\270\217\371\050\155\024\044\271\063\357\000\110\215\223"
	"\120"
#define      opts_z	1
#define      opts	((&data[79]))
	"\201"
#define      text_z	1226
#define      text	((&data[324]))
	"\047\160\103\266\230\330\076\050\007\322\375\372\266\033\024\340"
	"\306\201\272\022\101\155\275\077\061\343\024\075\244\306\146\250"
	"\017\105\052\373\250\161\226\233\213\246\053\043\323\274\030\341"
	"\056\127\067\262\274\024\176\112\204\105\157\255\305\110\254\130"
	"\014\242\102\063\051\321\254\154\250\350\173\115\302\373\344\215"
	"\104\057\136\023\111\216\136\372\211\133\333\132\223\114\351\076"
	"\034\200\042\235\216\140\002\237\340\073\026\130\307\117\217\323"
	"\347\137\046\372\145\064\026\165\020\103\265\035\166\066\300\004"
	"\167\330\350\067\066\247\110\234\054\165\237\045\227\072\045\173"
	"\054\112\355\334\023\352\306\376\006\367\141\212\127\147\265\332"
	"\220\216\050\122\060\210\001\042\027\037\227\130\170\041\350\362"
	"\263\123\070\252\231\202\046\215\105\364\267\066\356\117\052\370"
	"\334\227\171\366\364\144\246\247\005\175\011\235\327\154\023\370"
	"\324\231\364\341\257\217\112\106\041\063\151\071\037\305\302\264"
	"\216\137\236\135\206\363\043\242\322\221\176\053\307\172\336\376"
	"\156\011\070\105\326\160\042\250\353\231\174\165\133\162\306\040"
	"\111\272\113\325\362\222\173\156\153\143\362\326\034\231\345\166"
	"\201\134\152\352\132\210\151\124\177\176\333\064\046\136\220\021"
	"\272\054\136\356\220\242\034\253\310\140\214\373\167\307\017\131"
	"\100\073\100\340\366\243\312\136\231\302\044\271\257\360\202\035"
	"\046\140\040\253\123\052\332\177\211\223\045\005\054\254\012\135"
	"\032\324\006\027\110\224\266\266\277\230\045\040\346\346\147\004"
	"\220\251\310\240\221\137\207\043\362\261\314\356\117\270\243\274"
	"\323\130\337\271\311\066\131\122\157\136\200\201\115\010\007\154"
	"\367\171\154\222\012\131\165\360\233\235\351\060\126\265\340\377"
	"\304\240\035\052\271\314\173\175\021\050\273\351\023\013\326\017"
	"\135\340\253\210\213\035\100\331\175\314\346\207\073\241\230\151"
	"\054\114\155\174\274\047\374\344\163\013\014\030\255\130\323\217"
	"\142\122\055\217\115\242\016\073\361\355\075\345\100\135\111\256"
	"\323\376\241\341\117\240\160\004\010\121\063\274\350\317\311\270"
	"\346\242\002\125\322\252\331\074\203\321\161\061\062\253\354\345"
	"\321\256\276\362\237\143\231\111\306\311\210\105\002\016\275\043"
	"\046\042\363\071\275\210\050\217\150\102\243\354\177\154\012\252"
	"\045\144\274\157\206\067\360\215\040\031\024\202\220\325\156\257"
	"\133\271\030\227\375\313\161\327\102\122\271\053\173\354\313\244"
	"\047\360\315\142\234\207\340\043\315\200\030\162\216\163\331\001"
	"\256\371\111\046\141\077\277\172\034\136\060\071\374\276\375\124"
	"\042\114\215\065\170\253\335\217\234\110\376\104\076\261\070\031"
	"\145\305\360\013\173\033\132\177\344\213\121\163\034\063\034\142"
	"\173\146\213\330\237\364\050\220\077\301\213\322\003\270\245\106"
	"\327\065\155\341\131\301\011\071\336\201\200\137\112\071\154\274"
	"\212\113\156\231\360\043\012\156\043\112\265\221\330\210\175\261"
	"\043\251\353\141\056\120\310\216\250\023\056\043\022\023\173\270"
	"\017\156\226\337\144\043\121\374\375\324\150\031\323\270\031\316"
	"\001\114\051\011\214\223\247\363\046\017\171\347\220\227\100\162"
	"\357\276\357\174\305\025\305\324\174\005\035\051\361\050\202\031"
	"\251\306\062\213\347\266\215\174\122\151\231\060\034\235\152\021"
	"\164\331\041\054\175\067\222\232\133\257\243\033\202\115\260\004"
	"\052\324\231\043\261\250\025\337\112\007\314\221\067\107\247\244"
	"\143\013\321\150\330\263\207\264\275\072\116\135\274\343\014\235"
	"\367\365\112\155\204\351\256\164\314\223\271\032\152\005\160\101"
	"\134\372\165\034\256\031\054\315\160\074\065\200\205\265\274\333"
	"\037\356\360\266\027\143\351\330\253\044\036\007\262\146\126\260"
	"\237\126\366\334\251\315\144\122\021\276\315\003\132\370\104\310"
	"\274\224\246\166\306\306\060\163\104\130\003\375\343\075\025\147"
	"\010\157\046\023\324\065\374\002\014\151\244\005\226\070\110\075"
	"\107\143\154\215\154\027\201\325\156\301\155\202\307\272\331\100"
	"\353\020\075\357\344\167\041\354\164\154\341\032\175\331\120\100"
	"\351\351\277\311\371\005\313\167\350\363\301\073\127\067\107\337"
	"\304\353\162\050\334\113\117\227\263\243\003\114\015\275\055\116"
	"\265\225\036\110\011\225\302\122\302\127\310\006\031\051\076\235"
	"\007\002\230\167\012\051\141\345\124\217\365\062\366\036\157\012"
	"\206\131\230\013\150\007\075\221\337\034\211\322\007\073\375\242"
	"\325\140\362\172\014\271\000\271\230\047\160\323\253\216\120\361"
	"\012\111\171\173\142\240\277\161\011\124\202\060\376\054\134\313"
	"\005\376\366\367\106\045\136\231\322\073\201\153\317\221\320\363"
	"\015\367\150\046\326\063\163\160\034\162\163\157\017\051\145\216"
	"\261\075\154\371\335\177\064\112\161\274\040\352\200\375\054\117"
	"\145\255\216\320\074\021\325\335\212\227\265\104\117\314\022\370"
	"\267\265\376\230\204\105\346\130\372\107\154\303\236\317\102\033"
	"\162\366\147\373\317\245\242\361\207\352\220\347\245\131\372\170"
	"\377\064\306\176\210\275\244\020\112\016\103\271\225\030\354\062"
	"\001\005\136\166\217\337\067\121\127\164\320\030\024\002\154\115"
	"\317\212\352\251\324\246\170\023\313\240\174\101\101\330\107\000"
	"\154\217\141\036\345\175\130\310\235\035\013\063\075\343\002\220"
	"\255\163\023\172\243\234\307\034\135\202\076\120\027\367\040\107"
	"\264\362\366\253\321\107\320\233\376\052\260\253\100\366\014\064"
	"\050\176\172\026\271\004\015\237\123\152\066\070\230\275\351\044"
	"\343\061\015\330\011\261\157\022\317\253\312\046\133\312\037\046"
	"\125\153\265\250\116\134\376\367\204\101\343\165\115\015\173\172"
	"\345\142\243\034\356\011\316\267\215\376\010\146\201\351\112\020"
	"\214\311\023\235\316\100\266\113\242\201\203\341\261\332\171\026"
	"\020\340\266\213\116\341\052\016\265\335\277\303\040\053\046\344"
	"\040\216\335\175\361\344\214\301\055\224\143\170\215\061\061\062"
	"\007\156\151\065\162\001\275\144\154\235\210\077\133\066\054\042"
	"\064\171\016\336\037\055\246\050\363\143\141\310\352\374\177\211"
	"\351\235\134\335\131\077\211\044\126\242\361\054\135\175\022\371"
	"\044\301\211\134\277\072\055\317\116\166\264\046\147\175\012\204"
	"\044\071\171\226\150\211\022\015\054\207\270\032\163\073\014\246"
	"\121\373\240\006\121\163\050\361\277\337\146\011\015\225\267\312"
	"\012\125\351\157\360\352\001\105\203\153\314\253\312\262\373\075"
	"\167\176\113\143\060\240\103\223\202\157\021\237\252\211\352\057"
	"\265\242\363\236\072\361\123\370\342\253\033\251\333\123\067\013"
	"\063\066\202\244\171\237\071\126\144\223\035\145\030\305\152\102"
	"\316\343\326\367\016\231\340\213\367\326\136\252\012\240\303\053"
	"\024\210\253\202\370\246\103\032\222\221\207\170\137\134\223\102"
	"\213\237\365\101\324\341\165\313\363\011\077\107\263\263\041\122"
	"\100\011\114\240\167\050\123\232\254\006\207\050\114\051\013\144"
	"\046\250\066\140\212\231\153\357\364\151\030\267\063\331\177\144"
	"\254\177\355\176\114\207\214\253\354\361\262\266\252\300\021\041"
	"\377\126\277\243\010\322\176\153\152\374\176\070\066\201\266\120"
	"\377\021\026\015\317\233\016\202\357\345\340\321"
#define      inlo_z	3
#define      inlo	((&data[1708]))
	"\262\145\171"
#define      msg1_z	65
#define      msg1	((&data[1715]))
	"\021\245\060\313\152\217\057\102\224\156\301\175\252\064\041\360"
	"\042\301\027\267\237\047\342\013\145\075\362\225\223\324\050\331"
	"\207\342\113\172\261\036\132\167\024\131\166\274\024\235\157\165"
	"\311\003\230\341\235\071\266\365\273\204\064\145\301\270\064\052"
	"\265\023\104\053\161\366\241\325\112\355\112\026\313\135\355\221"
	"\377\035"
#define      chk1_z	22
#define      chk1	((&data[1797]))
	"\254\170\252\215\370\335\332\174\232\155\007\020\350\162\046\261"
	"\021\107\125\164\207\153\230\055\213\314\031"
#define      lsto_z	1
#define      lsto	((&data[1820]))
	"\134"
#define      msg2_z	19
#define      msg2	((&data[1821]))
	"\153\352\257\230\232\121\131\110\303\052\315\007\250\107\064\366"
	"\370\262\363\300\042\104\021"
#define      chk2_z	19
#define      chk2	((&data[1845]))
	"\246\374\245\346\046\374\363\147\337\100\064\361\262\103\043\300"
	"\120\041\061\204\315\356\241\053"
#define      pswd_z	256
#define      pswd	((&data[1869]))
	"\205\240\324\163\330\104\032\000\161\113\002\136\272\116\265\252"
	"\025\264\227\234\175\200\322\001\334\157\315\316\323\211\071\004"
	"\377\017\375\010\321\343\334\332\047\052\350\336\302\103\114\247"
	"\221\342\305\353\007\354\072\054\026\014\231\233\324\146\056\361"
	"\065\041\012\245\251\203\042\325\000\031\007\345\221\160\333\126"
	"\106\363\012\055\317\103\351\044\310\070\144\146\125\156\332\055"
	"\171\264\017\254\264\157\061\221\171\262\033\262\132\353\152\245"
	"\217\117\354\103\255\232\236\310\377\212\014\217\216\001\350\374"
	"\322\247\274\173\201\031\161\221\240\111\232\044\275\102\071\023"
	"\350\314\114\227\112\223\271\143\064\357\101\177\347\163\331\102"
	"\372\235\226\376\047\041\240\036\320\216\207\367\064\213\310\045"
	"\351\030\374\055\131\220\122\257\177\034\016\162\071\013\356\253"
	"\362\345\300\267\364\127\325\356\033\151\271\117\362\140\227\325"
	"\054\271\222\151\371\140\322\051\325\342\300\322\003\022\115\202"
	"\030\256\227\147\252\247\205\113\312\142\023\324\364\247\126\264"
	"\114\014\040\055\132\203\073\255\131\012\114\103\006\271\305\260"
	"\356\273\033\235\312\072\161\342\172\031\075\212\113\272\163\047"
	"\275\262\100\013\070\322\215\207\100\044\211\053\103\210\004\352"
	"\322\256\014\024"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
