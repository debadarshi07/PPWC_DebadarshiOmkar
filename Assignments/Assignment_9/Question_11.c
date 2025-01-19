#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main() {
    int fd[2];
    pid_t pid;
    char write_msg[] = "Hello from child process!";
    char read_msg[100];
    pid = fork();
    if (pid == 0) {
        close(fd[0]);
        write(fd[1], write_msg, strlen(write_msg) + 1);
        printf("Child process sent message: %s\n", write_msg);
        close(fd[1]);
        return 0;
    }
    else {
        close(fd[1]);
        read(fd[0], read_msg, sizeof(read_msg));
        printf("Parent process received message: %s\n", read_msg);
        close(fd[0]);
        wait(NULL);
    }
    return 0;
}