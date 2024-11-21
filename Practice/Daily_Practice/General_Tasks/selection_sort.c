#include <stdio.h>

void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;

    for (i = 0; i < size - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[] = {3, 2, 5, 4, 8, 7};
    selectionSort(arr, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}