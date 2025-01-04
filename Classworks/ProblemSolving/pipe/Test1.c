#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main(void) {
    int fd[2], fs[2], fds[2];
    pipe(fd);
    pipe(fs);
    pipe(fds);
    return 0;
}

/*

Steps to Verify:
Run the program. Note the PID of the process. For instance, if the process ID is 12345:
./a.out &
echo $! Get the PID of the running process
cd /proc/<PID>/fd
ls -l List the file descriptors.This will display symbolic links for all open file descriptors

*/