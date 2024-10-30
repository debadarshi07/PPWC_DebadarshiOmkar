#include <stdio.h>

int differenceOfSets(int arr1[], int arr2[], int size1, int size2, int diff[]);
int differenceOfSets(int arr[], int arr2[], int size1, int size2, int diff[]) {
    int index = 0; 
    for (int i = 0; i < size1; i++) {
        int found = 0;
        for (int j = 0; j < size2; j++) {
            if (arr[i] == arr2[j]) {
                found++;
            }
        }
        if (found == 0) {
            diff[index++] = arr[i];
        }
    }
    return index;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int maxSize = size1 > size2 ? size1 : size2;
    int diff[maxSize];

    int size3 = differenceOfSets(arr1, arr2, size1, size2, diff);
    printf("arr1 - arr2 = { ");
    for(int i = 0; i < size3 ; i++) {
        printf("%d ", diff[i]);
    }
    printf("}");

    return 0;
}
