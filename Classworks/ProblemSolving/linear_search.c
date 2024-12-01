#include <stdio.h>
#include <stdlib.h>

int search_element(int *arr, int size, int target) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target)
			return i;
	}
	return -1;
}

int main() {
	int *arr;
	int size;

	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	arr = (int*) malloc(size * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 0;
	}

	for (int i = 0; i < size; i++) {
		printf("Enter element at index %d: ", i);
		scanf("%d", &(arr[i]));
		printf("\n");
	}

	int target;
	printf("Enter the element you want to find: ");
	scanf("%d", &target);

	int index = search_element(arr, size, target);

	if (index != -1) {
		printf("Element found at index %d.\n", index);
	} else {
		printf("Element is not found in the array.\n");
	}
	return 0;
}