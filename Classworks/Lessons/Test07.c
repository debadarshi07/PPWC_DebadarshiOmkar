#include <stdio.h>
int main() {
/*
	int a[4][5] = {{1,2,3,4,5}, {5,6,7,8,9}, {10,11,12,13,14}, {16,17,18,19,20}};
	printf("%d\n", *(*(a + **a + 2) + 3));
	printf("*a: %u\n", **a);
	int b = 5;
	printf("%u\n", &b);
*/
	
	int arr[] = {1,2,3,4,5,6,7,8,9,0,1,2,5}, *ip = arr + 4;
	printf("%u\n", arr);
	printf("%u\n", ip);
	// printf("%d\n", ([1](ip))); This is error.
	return 0;
}