#include <stdio.h>
int main(void) {
    fprintf(stderr, "ITER\n");
    while(1);
    return 0;
}

/*

Analysis:
When a program starts, by default, three file descriptors are open:

0 (STDIN)
1 (STDOUT)
2 (STDERR)

Answer:
Number of FDs: 3
FD numbers: 0, 1, 2

*/