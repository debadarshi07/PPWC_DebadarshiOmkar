#include <stdio.h>
#define MAX 100

void set(int arr[], int n);
int main() {
    int arr[MAX], n = 10, i;
    set(arr, n);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

void set(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        if (i % 2 == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
}

/*
    O/P
    1 0 1 0 1 0 1 0 1 0
    Arrays in C follow pass by reference. Hence, we can modify the array using functions.
*/