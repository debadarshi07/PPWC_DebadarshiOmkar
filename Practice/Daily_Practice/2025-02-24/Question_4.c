#include <stdio.h>
void main() {
    static int a[] = {14, 27, 73, 40, 50};
    static int b[] = {4, 7, 3, 14, 25};
    static int *p[] = {a, b + 3, a + 4, b + 1, a + 2, b + 2};
    int **ptr = p;
    ptr += 3;
    printf("%d\n", *ptr[-1]);
}

/*
    O/P
    50
*/