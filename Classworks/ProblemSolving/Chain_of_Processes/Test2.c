#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int n = 4;
    for (int i = 1; i < n; i++) {
        pid_t child_pid = fork();
        if (child_pid == -1) {
            perror("Fork failed.\n");
        }
        if (child_pid == 0) {
            printf("Child %d with PID %d is created. Parent PID %d\n", i, getpid(), getppid());
        }
        else {
            printf("Parent PID: %d\n", getpid());
            wait(NULL);
            break;
        }
    }
    return 0;
}