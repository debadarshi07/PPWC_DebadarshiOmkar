#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int n = 4;
    printf("Parent process ID: %d\n", getpid());
    for (int i = 1; i < n; i++) {
        pid_t child_pid = fork();
        if (child_pid == -1) {
            perror("Fork failed");
            return 1;
        }
        else if (child_pid == 0) {
            printf("Child process %d with ID: %d and Parent ID: %d\n", i, getpid(), getppid());
            return 0;
        }
        else {
            wait(NULL);
        }
    }
    printf("All child processes have completed.\n");
    return 0;
}