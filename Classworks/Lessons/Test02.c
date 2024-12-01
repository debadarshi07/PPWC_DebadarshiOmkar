#include <stdio.h>
int main() {
/*
	int x = 10;
	printf("Value of x is: %d\n\n", x);
	
	int* xAdd = &x;
	printf("The address of x is: %p\n\n", xAdd);
	
	float y = 100;
	printf("Value of y is: %f\n\n", y);
	
	float* yAdd = &y;
	printf("The address of y is: %p\n\n", yAdd);
	
	char ch = 'c';
	printf("Value of ch is: %c\n\n", ch);
	
	char* chAdd = &ch;
	printf("The address of ch is: %p\n\n", chAdd);
*/
	
	int x = 20;
	int *ptr = &x;
	
	int *ptr1 = &x, *ptr2 = &x, *ptr3 = &x, *ptr4 = &x;
	
	printf("x: %d\n\n", x);
	printf("&x: %u\n\n", &x);
	printf("ptr: %u\n\n", ptr);
	printf("*ptr: %d\n\n", *ptr);
	printf("*(&x): %d\n\n", *(&x));
	printf("&ptr: %u\n\n", &ptr);
	printf("*(&ptr): %u\n\n", *(&ptr));
	printf("**(&ptr): %d\n\n", **(&ptr));
	printf("ptr + 1: %d\n\n", (ptr + 1));
	
	printf("*ptr1++: %d\n\n", *ptr1++);
	printf("*(ptr2++): %d\n\n", *(ptr2++));
	
	printf("*++ptr3: %d\n\n", *++ptr3);
	printf("%u", ptr3);
	printf("*(++ptr4): %d\n\n", *(++ptr4));	
}