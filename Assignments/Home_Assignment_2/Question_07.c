#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 5};
    int *ip = arr + 4;
    printf("%d\n", ip[1]);
    return 0;
}

/*
    O/P
    6
    because ip[0] = 5(arr + 4)
*/