#include <stdio.h>

int ProcessArray(int *listA, int x, int n) {
    int i, j, k;
    i = 0;
    j = n - 1;
    do {
        k = (i + j) / 2;
        if (x <= listA[k])
            j = k - 1;
        if (listA[k] <= x)
            i = k + 1;
    } while (i <= j);

    if (listA[k] == x)
        return (k);
    else
        return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,11,12};

    int index = ProcessArray(arr, 10, 11);
    printf("Element 10 is present at index: %d\n", index);

    int index1 = ProcessArray(arr, 6, 11);
    printf("Element 6 is present at index: %d\n", index1);

    return 0;
}

/*
    O/P
    (B) It is an implementation of binary search
*/