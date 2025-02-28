#include <stdio.h>

void foo(int n, int sum) {
    static int k = 0;
    int j = 0;
    if (n == 0) return;
    k = n % 10;
    j = n / 10;
    sum += k;
    foo(j, sum);
    printf("%d, ", k);
}

int main() {
    int a = 2048, sum = 0;
    foo(a, sum);
    printf("%d\n", sum);
}

/*
    O/P
    2, 2, 2, 2, 0
*/