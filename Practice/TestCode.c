#include <stdio.h>

int main () {
	// Testing pointers
	int x = 20;
	int *ptr = &x;
	
	printf("x: %d\n\n", x);
	printf("&x: %u\n\n", &x);
	printf("ptr: %u\n\n", ptr);
	printf("*ptr: %d\n\n", *ptr);
	printf("*(&x): %d\n\n", *(&x));
	printf("&ptr: %u\n\n", &ptr);
	printf("*(&ptr): %u\n\n", *(&ptr));
	printf("(&ptr): %d\n\n", **(&ptr));
    
    // Pre and Post increment Operators testing
    int *ptr1 = &x, *ptr2 = &x, *ptr3 = &x, *ptr4 = &x;

    printf("*ptr1: %u\n\n", *ptr1);
    printf("*ptr2: %u\n\n", *ptr2);

    printf("*ptr1++: %u\n\n", *ptr1++);
    printf("*(ptr2++): %u\n\n", *(ptr2++));

    printf("*++ptr3: %u\n\n", *++ptr3);
    printf("*(++ptr4): %u\n\n", *(++ptr4));
    return 0;
}
