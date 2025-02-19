#include <stdio.h>

void main() {
    int a[5][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
    printf("%d", ((a == a[0]) && (a[0] == *a)));
}

/*
    O/P
    1

    Though the types are different but the absolute memory location numbers are still same.
*/