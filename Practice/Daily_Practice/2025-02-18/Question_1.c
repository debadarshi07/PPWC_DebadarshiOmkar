#include <stdio.h>
void f(int *x, int *y) {
    int *temp = x;
    x = y;
    y = temp;
    *x = *x + 2;
    *y = *y << 2;
}

int main() {
    int a = 10, b = 2;
    f(&a, &b);
    f(&a, &b);
    printf("%d\n", a + b);
    return 0;
}

/*
    O/P
    166
*/