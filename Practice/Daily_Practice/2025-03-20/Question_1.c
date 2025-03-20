#include <stdio.h>

int func(int n) {
    if (n <= 1) {
        return 1;
    } else if (n % 2 == 0) {
        return n * func(n - 1) - func(n - 2);
    } else {
        return n + func(n - 1) + func(n - 2);
    }
}

int main() {
    int n = 5;
    printf("%d\n", func(n));
    return 0;
}

/*
    O/P
    29
*/