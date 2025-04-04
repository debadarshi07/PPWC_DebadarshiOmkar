#include <stdio.h>

void fun(int arr[][3]) {
    printf("%d\n", *(*(arr + 2) + 1));
    printf("%p\n", (*arr) + 2);
    printf("%p\n", &arr[0][2]);
    printf("%d\n", *(((*arr) + 1) + 1));
}

int main() {
    int a[][3] = {5, 6, 7, 8, 9, 4, 3, 2, 1};
    fun(a);
    return 0;
}

/*
    O/P
    2 (arr[2][1])
    108 (address of arr[0][2])
    108 (address of arr[0][2])
    7 (arr[0][2])
*/