#include <stdio.h>

int main() {
	
	// Array declaration
	int arr1[4][3] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int arr2[4][3] = {{0,1,2},{3,4,5},{6,7,8},{9,10,11}};
	
	// Displaying the array arr1
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("arr[%d][%d]: %d\n", i, j, arr1[i][j]);
		}
	}
	return 0;
}