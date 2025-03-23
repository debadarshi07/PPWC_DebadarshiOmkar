#include <stdio.h>

int main() {
    int a[] = {'a', 'B', 'c', 'D', 'e'};
    int *ptr = a;
    int x;
    x = *(ptr) & *(ptr + 3) ^ *(ptr + 2) >> 2;
    printf("%d", x);
    return 0;
}

/*
    O/P
    88
*/