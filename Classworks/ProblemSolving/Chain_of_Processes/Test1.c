#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int pid;
    int n = 4;
    for (int i = 1; i < n; i++) {
        if (if pid = fork()) {
            printf("Parent process ID is %d\n", getpid());
            break;
        }
        else {
            printf("Child process ID is %d\n", getpid());
        }
    }
    return 0;
}