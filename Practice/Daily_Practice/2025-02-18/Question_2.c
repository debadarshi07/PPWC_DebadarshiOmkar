#include <stdio.h>
void f(int *x, int *y) {
    x = y;
    *x = *x << 3;
    *y = ~*y;
}

int main() {
    int a = 10, b = 2;
    f(&a, &b);
    printf("%d\n", ~(a + b));
    return 0;
}

/*
    O/P
    6
*/