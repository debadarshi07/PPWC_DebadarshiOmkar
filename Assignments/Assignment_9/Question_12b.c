#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    pid_t childpid;
    int fd, fd1;
    char buf[20];
    if (argc != 2) { /* command line has pipe name */
        fprintf(stderr, "Usage: %s pipename\n", argv[0]);
        return 1;
    }
    mkfifo(argv[1], 0600); /* create a named pipe */
    childpid = fork();
    if (childpid == 0) { /* The child writes */
        fd = open(argv[1], O_WRONLY);
        write(fd, "I am child\n", 11);
    }
    else {
        fd1 = open(argv[1], O_RDONLY);
        read(fd1, buf, 11);
        write(1, buf, 11);
        wait(NULL);
        unlink(argv[1]);
    }
    return 0;
}