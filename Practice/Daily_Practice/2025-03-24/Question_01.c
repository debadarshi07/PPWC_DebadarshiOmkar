#include <stdio.h>

void foo(int*, int);

int main() {
    int a[] = {11, -4, 5, -1, 11, 14};
    int n = 6;
    foo(a, n);
    return 0;
}

void foo(int *pa, int n) {
    static int a = 0;
    if (n == 0) return;

    if (*pa > 0) a = a + *pa;
    foo(pa + 1, n - 1);
    printf("\t%d", a);
    return;
}

/*
    O/P
            41      41      41      41      41      41
*/