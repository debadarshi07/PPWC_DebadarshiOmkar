#include <stdio.h>
#include <stdbool.h>

int binarySearch(int arr[], int size, int target);
int binarySearch(int arr[], int size, int target) {
    int bottom = 0, top = size - 1;
    bool found = false;
    int index = -1;

    while (bottom <= top) {
        int middle = bottom + (top - bottom) / 2;

        if (arr[middle] == target) {
            index = middle;
            return index;
        } else if (arr[middle] > target) {
            top = middle - 1;
        } else {
            bottom = middle + 1;
        }
    }
    return index;
}

int main() {
    int arr[] = {3, 5, 9, 15, 18, 20, 22, 27};
    int target = 18;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, size, target);
    if (index != -1) {
        printf("Target element found at index: %d.", index);
    } else {
        printf("Target element not found in the array.");
    }
    
    return 0;
}