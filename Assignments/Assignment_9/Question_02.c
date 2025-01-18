#include <stdio.h>
int main(void) {
    fork();
    fork();
    fprintf(stderr, "hello\n");
    return 0;
}

/*

Analysis:
fork() duplicates the process, and each process will inherit its parent's FDs.
Two fork() calls result in 4 processes.

Answer:
Number of processes: 4
FDs for each process: 3 (0, 1, 2)

*/