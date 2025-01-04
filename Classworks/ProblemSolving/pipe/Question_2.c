/*
    Develop a c program to write and read a message using pipe() for a single process.
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    pipe(fd);
    char *sent = "Jai Hind from Debadarshi Omkar";
    char received[strlen(sent) + 1];

    write(fd[1], sent, strlen(sent) + 1);
    close(fd[1]);

    read(fd[0], received, sizeof(received));
    printf("Message Received: %s\n", received);
    close(fd[0]);

    return 0;
}