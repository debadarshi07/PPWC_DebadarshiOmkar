#include <stdio.h>

int main() {
    int a[][2] = {1, 3, 5, 7, 9, 11};
    int *ptr = a[1];
    ++*ptr++;
    printf("%d\n", *ptr);
    return 0;
}

/*
    O/P
    7
*/