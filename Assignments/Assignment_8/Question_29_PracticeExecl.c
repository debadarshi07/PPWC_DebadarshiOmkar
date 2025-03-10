#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == -1) {
        perror("Fork failed");
        exit(1);
    }

    if (pid == 0) {
        printf("Child Process: Executing MulThree.c\n");
        execl("./MulThree.out", "MulThree.out", NULL);
        perror("execl failed");
        exit(1);
    } else {
        int status;
        printf("Parent Process: Waiting for child process to finish...\n");

        waitpid(pid, &status, 0);

        if (WIFEXITED(status)) {
            printf("Child Process %d terminated normally with exit status %d\n", pid, WEXITSTATUS(status));
        } else {
            printf("Child Process %d did not terminate normally\n", pid);
        }
        printf("Parent Process ID: %d\n", getpid());
    }

    return 0;
}