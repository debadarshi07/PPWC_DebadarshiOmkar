#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int status;
    pid_t id = fork();
    if (id == 0) {
        printf("I am child and my pid is :%d\n", getpid());
        pid_t waitr = wait(NULL);
        if (waitr == -1) {
            perror("Error is :");
        }
        exit(0);
    }
    printf("I am Parent\n");
    printf("Status=%d\n", status);
}