#include <stdio.h>

int main() {
    int a[][2] = {12, 34, 5, 6, 78, 8, 99};
    int *ptr = *(a + 2);
    printf("%d ", *ptr++);
    ++*ptr;
    printf("%d ", *ptr);
    return 0;
}

/*
    O/P
    78 9
*/