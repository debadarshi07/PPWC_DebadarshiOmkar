#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *ip = arr + 4;
    printf("%d\n", ip[1]);
    return (0);
}

/*
    O/P
    6
*/