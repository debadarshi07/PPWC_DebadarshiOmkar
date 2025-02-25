#include <stdio.h>

int foo(int m, int n) {
    int result;
    if (m == 0)
        result = n + 1;
    else if (n == 0)
        result = foo(m - 1, 1);
    else
        result = foo(m - 1, foo(m, n - 1));
    return result;
}

int main() {
    int answer = foo(1, 3);
    printf("%d\n", answer);
    return 0;
}

/*
    O/P
    5
*/