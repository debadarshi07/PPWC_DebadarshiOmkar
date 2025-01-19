#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    char write_msg[] = "Hello from the pipe!";
    char read_msg[100];

    write(fd[1], write_msg, strlen(write_msg) + 1);
    read(fd[0], read_msg, sizeof(read_msg));
    printf("Message read from pipe: %s\n", read_msg);
    close(fd[0]);
    close(fd[1]);
    return 0;
}