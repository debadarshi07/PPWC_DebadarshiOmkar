#include <stdio.h>

int main() {
    int a[] = {11, 12, 19, 24, 45};
    int *ptr = a + 2;
    int **p = &ptr;
    int x;
    x = *(ptr) & 20 ^ (**p + 2) >> 2;
    printf("%d ", x);
    x = **p <<= 2;
    printf("%d", x);
    return 0;
}

/*
    O/P
    21 76
*/