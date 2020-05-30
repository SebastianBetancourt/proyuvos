#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{

const char* syscalls[] = {
    "fork", "exit", "wait", "pipe", "read", "kill", "exec", 
    "fstat", "chdir", "dup", "getpid", "sbrk", "sleep", 
    "uptime", "open", "write", "mknod", "unlink", "link", 
    "mkdir", "close", "trace"};

const int SYSCALLC = sizeof(syscalls)/sizeof(syscalls[0]);

int nsyscall = -1;
if (argc == 2) {
  nsyscall = atoi(argv[1]);
}
if (nsyscall == -1) {
       for(int i = 0; i < SYSCALLC; i++)
                printf(2, "%s %d\n", syscalls[i], trace(i));
} else {
        printf(2, "%s %d\n", syscalls[nsyscall], trace(nsyscall));
}
 exit();
}
