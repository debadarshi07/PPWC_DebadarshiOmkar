#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#define FIFO_NAME "/tmp/myfifo"

int main() {
    int fd;
    mkfifo(FIFO_NAME, 0600);
    fd = open(FIFO_NAME, O_WRONLY);
    write(fd, "Writer\n", 7);
    close(fd);
    return 0;
}