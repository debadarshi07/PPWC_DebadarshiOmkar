#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t id;
    printf("Parent Process : Executed by parent process before fork() - PID = (%d)\n", getpid());
    id = fork();
    if (id < 0) {
        printf("\nFork failed\n");
        exit(-1);
    }
    if (id > 0) {
        printf("\nParent process exited\n");
        exit(0);
    }
    else {
        printf("\nChild process executing\n");
        sleep(10);
        printf("\nI am child process, id value is (%d)\n", id);
        printf("\nchild process id is (%d)\n", getpid());
    }
    return 0;
}