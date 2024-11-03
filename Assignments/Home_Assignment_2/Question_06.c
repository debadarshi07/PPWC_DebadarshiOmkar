#include <stdio.h>

void f1(int a[], int n) {
    a[1] = 10;
}

void f2(int a[], int n) {
    a[0] = 2 * n;
    a[4] = n / 2;
}

void f3(int a[], int n) {
    a[2] = 4 * n;
    a[3] = 50;
}

int main() {
    int a[5], i;
    f1(a, 5);
    f2(a, 5);
    f3(a, 5);
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    return (0);
}

/*
    O/P
    10 10 20 50 2
*/