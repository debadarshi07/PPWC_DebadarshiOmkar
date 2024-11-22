#include <stdio.h>

void insertionSort(int arr[], int size) {
    int i, j;

    for (i = 1; i < size; i++) {
        j = i - 1;

        while (j >= 0 && arr[j] > arr[i]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main() {
    int arr[] = {3, 2, 5, 4, 8, 7};
    insertionSort(arr, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}