#include <stdio.h>

int main() {
	int *p = NULL;
	int (*ptr)[5];
	int arr[5] = {11, 12, 13, 14, 15};
	int i;
	p = arr, ptr = arr;
	
	for (i = 0; i < 5; i++) {
		printf("Value of arr[%d] = %d \n", i, arr[i]);
	}
	
	printf("arr: %u\n", arr);
	printf("p: %u\n", arr);
	printf("arr[0]: %u\n", arr[0]);
	printf("*p: %d\n", *p);
	printf("*ptr: %u\n", *ptr);
	printf("*arr: %d\n\n", *arr);
	
	printf("p: %u\n",p);
	printf("ptr: %u\n\n", ptr);
	
//	printf("p++: %u\n", p++);
//	printf("ptr++: %u\n\n", ptr++);
	
	printf("p: %u\n",p);
	printf("ptr: %u\n", ptr);
	
	printf("ptr[2]: %u\n\n", ptr[2]);
	
	printf("*ptr + 1: %u\n", *ptr + 1);
	printf("**ptr: %d\n", **ptr);
}