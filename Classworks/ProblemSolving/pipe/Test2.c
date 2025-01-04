#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int fd[2], fs[2], fds[2];
    pid_t pid;
    pipe(fd);
    pid = fork();
    if (pid == 0) {
        pipe(fs);
        pipe(fds);
    }
    else {
        wait(NULL);
        printf("Parent waits\n");
    }
    return 0;
}

/*

Verify :
./a.out &
pstree -p Shows the parent and child PIDs
cd /proc/<parent_PID>/fd
ls -l
cd /proc/<child_PID>/fd
ls -l

*/