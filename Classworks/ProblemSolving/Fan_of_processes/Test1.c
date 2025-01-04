#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    for (int i = 1; i < 4; i++) {
        if (fork() == 0) {
            printf("child pid %d from the parent pid %d\n", getpid(), getppid());
            exit(0);
        }
    }
}