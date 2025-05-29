#include <stdio.h>
// Multiple recursion
void print(int n) {
    if (n <= 0) return;
    print(n - 1);
    printf("%d", n);
    print(n - 1);
}

int main() {
    print(3);
    return 0;
}

/*
    O/P
    1213121
*/