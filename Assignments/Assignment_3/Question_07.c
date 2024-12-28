#include <stdio.h>

int distinctElements(int arr[], int size, int collect[]);
int distinctElements(int arr[], int size, int collect[]) {
    int i, j, index = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == i) {
            collect[index++] = arr[i];
        }
    }
    return index;
}

int distinctElements2(int arr[], int size, int collect[]) {
    int i = 0, j = 0, index = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < index; j++) {
            if (arr[i] == collect[j])
                break;
        }
        if (j == index)
            collect[index++] = arr[i];
    }
    return index;
}

int main() {
    int arr[] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int collect[size];
    int collect2[size];

    int disSize = distinctElements(arr, size, collect);
    int disSize2 = distinctElements2(arr, size, collect2);

    printf("Distinct elements: ");
    for (int i = 0; i < disSize; i++) {
        printf("%d ", collect[i]);
    }

    printf("\n");

    printf("Distinct elements: ");
    for (int i = 0; i < disSize2; i++) {
        printf("%d ", collect2[i]);
    }

    return 0;
}