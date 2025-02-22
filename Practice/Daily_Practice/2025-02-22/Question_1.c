#include <stdio.h>

void foo1(int *ptr, int num) {
    num += 5;
    *ptr *= num;
    return;
}

void foo2(int *ptr, int num) {
    num -= 10;
    *ptr /= num;
    return;
}

void main() {
    int i = 5, j = 10, k = 20;
    foo2(&j, k);
    foo1(&i, j);
    printf("%d", i + j);
}

/*
    O/P
    31
*/