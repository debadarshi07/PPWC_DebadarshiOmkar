#include <stdio.h>

int a;
void foo(int b) {
    b += a;
    printf("%d ", b);
}

void bar(int *c) {
    int a = *c + 2;
    foo(a);
    *c = a - 1;
    printf("%d ", a);
}

void main(void) {
    a = 10;
    bar(&a);
    printf("%d ", a);
}

/*
    O/P
    22 12 11
*/