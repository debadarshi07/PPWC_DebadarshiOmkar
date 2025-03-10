#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t cpid;
    int status = 0;
    int num = 5;
    cpid = fork();
    if (cpid == -1)
        exit(0);
    if (cpid == 0) {
        printf("\nBefore exec\n");
        execl("./np2", "arg1", "arg2", NULL);
        printf("\nLine is not printed\n");
    }
    else {
        printf("\n Parent executing before wait(), child process created by parent is = (%d)\n", cpid);
        cpid = wait(&status); /* waiting for child process to exit*/
        printf("\nwait() in parent done\nParent pid = %d\n", getpid());
        printf("\ncpid returned is (%d)\n", cpid);
        printf("\nstatus is (%d)\n", status);
    }

    return 0;
}