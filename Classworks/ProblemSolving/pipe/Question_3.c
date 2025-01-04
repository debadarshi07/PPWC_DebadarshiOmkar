/*
Here, use the fork() system call to create a child process. The child process will write a message into the pipe and the parent process will read the message from the pipe. The parent process will display the message on stdout. Design a program to establish the communication using pipe between the processes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    pid_t pid;
    char *sent = "Jai Hind from Debadarshi Omkar";
    char received[strlen(sent) + 1];

    pid = fork();
    if (pid == 0) {
        close(fd[0]);
        write(fd[1], sent, strlen(sent) + 1);
        close(fd[1]);
        exit(0);
    } else {
        close(fd[1]);
        read(fd[0], received, sizeof(received));
        printf("Message Received: %s\n", received);
        close(fd[0]);
        wait(NULL);
    }

    return 0;
}