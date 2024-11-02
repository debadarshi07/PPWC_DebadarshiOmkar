#include <stdio.h>

int A(int x, int y) {
    return (x * y);
}

int main() {
    int x = 2, y = 5, i;
    int a[] = {A(x, y), A(5, 5)};
    for (i = 0; i < 2; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

/*
    O/P
    10 25
*/