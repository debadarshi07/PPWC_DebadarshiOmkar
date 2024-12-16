#include <stdio.h>
#include <unistd.h>

int main(void) {
    fork();
    fork();
    fork();
    printf("ITER\n");
    printf("ITER\n");
    return 0;
}

/*
    O/P
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER
    ITER

    Total 8 processes will be created.
    The formula that can be devised for number of processes created is: 2^n, where n is no. of fork() in program.
*/