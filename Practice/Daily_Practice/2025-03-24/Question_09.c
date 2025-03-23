#include <stdio.h>

void fun(int *x, int *y, int *z) {
    *y = *y + 4;
    *z = *x + *y + *z;
}

int main() {
    int x = 20, y = 13;
    fun(&y, &x, &x);
    printf("%d %d", x, y);
    return 0;
}

/*
    O/P
    61 13
*/