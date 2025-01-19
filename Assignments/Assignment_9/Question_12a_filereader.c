#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#define FIFO_NAME "/tmp/myfifo"

int main() {
    int fd;
    char buf[20];
    fd = open(FIFO_NAME, O_RDONLY);
    read(fd, buf, 7);
    write(1, buf, 7);
    close(fd);
    unlink(FIFO_NAME);
    return 0;
}