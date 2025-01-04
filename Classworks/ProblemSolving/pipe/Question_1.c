/*
(Q) Write a parent child code where the child receives a string from the user and shares it to the parent using pipe.
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    pid_t cid;
    char write_msg[] = "A message from parent.";
    char read_msg[strlen(write_msg) + 1];

    pipe(fd);
    cid = fork();

    if (cid == 0) {
        close(fd[1]);
        read(fd[0], read_msg, sizeof(read_msg));
        printf("Message Received: %s\n", read_msg);
        close(fd[0]);
        exit(0);
    } else {
        close(fd[0]);
        write(fd[1], write_msg, strlen(write_msg) + 1);
        printf("Written message: %s\n", write_msg);
        close(fd[1]);
        wait(NULL);
    }
    return 0;
}