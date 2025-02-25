#include <stdio.h>

int f1(int **p) {
    **p += 10;
    return **p;
}

int f(int x, int *p, int **p1) {
    int y, z;
    **p1 += 10;
    z = **p1;
    *p += 20;
    y = *p;
    x += 30;
    return x + y + z;
}

int main() {
    int x, *ptr, **ptr1;
    x = 10;
    ptr = &x;
    ptr1 = &ptr;
    printf("%d", f(x, ptr, &ptr) + f1(ptr1));
    return 0;
}

/*
    O/P
    150
*/