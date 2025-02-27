#include <stdio.h>
int g(int n) {
    return (n + 10);
}

int f(int n) {
    return g(n * 2);
}

int main() {
    int sum, n;
    sum = 0;
    for (n = 1; n < 3; n++)
        sum += g(f(n));
    printf("%d", sum);

    return 0;
}