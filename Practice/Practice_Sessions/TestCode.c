#include <stdio.h>

int main () {
	// Testing pointers
	int x = 20;
	int *ptr = &x;
	
	printf("\nTesting pointers with different combinations of operators :-->\n\n");

	printf("x: %d\n", x);
	printf("&x: %u\n", &x);
	printf("ptr: %u\n", ptr);
	printf("*ptr: %d\n", *ptr);
	printf("*(&x): %d\n", *(&x));
	printf("&ptr: %u\n", &ptr);
	printf("*(&ptr): %u\n", *(&ptr));
	printf("**(&ptr): %d\n", **(&ptr));
    
    // Pre and Post increment Operators testing
    int *ptr1 = &x, *ptr2 = &x, *ptr3 = &x, *ptr4 = &x;

	printf("\nPre and Post increment operators testing :-->\n\n");

	printf("ptr1: %u\n", ptr1);
	printf("ptr2: %u\n", ptr2);
	printf("ptr3: %u\n", ptr3);
	printf("ptr4: %u\n\n", ptr4);

	printf("ptr1++: %u\n", ptr1++);
	printf("ptr1: %u\n", ptr1);ptr1--;
	printf("ptr2++: %u\n", ptr2++);
	printf("ptr2: %u\n\n", ptr2);ptr2--;

	printf("++ptr3: %u\n", ++ptr3);
	printf("ptr3: %u\n", ptr3);--ptr3;
	printf("++ptr4: %u\n", ++ptr4);
	printf("ptr4: %u\n\n", ptr4);--ptr4;

    printf("*ptr1: %u\n", *ptr1);
    printf("*ptr2: %u\n\n", *ptr2);

    printf("*ptr1++: %u\n", *ptr1++);
	printf("ptr1: %u\n", ptr1);
	printf("*ptr1: %d\n", *ptr1);
    printf("*(ptr2++): %u\n", *(ptr2++));
	printf("ptr2: %u\n", ptr2);
	printf("*ptr2: %d\n\n", *ptr2);

	printf("*ptr3: %u\n", *ptr3);
    printf("*ptr4: %u\n\n", *ptr4);

    printf("*++ptr3: %u\n", *++ptr3);
	printf("ptr3: %u\n", ptr3);
	printf("*ptr3: %d\n", *ptr3);
    printf("*(++ptr4): %u\n", *(++ptr4));
	printf("ptr4: %u\n", ptr4);
	printf("*ptr4: %d\n\n", *ptr4);

	// This is to increment the value inside the pointer
	printf("(*ptr1)++: %d\n", (*ptr1)++);
	printf("*ptr1: %d\n", *ptr1);
	printf("(*ptr2)++: %d\n", (*ptr2)++);
	printf("*ptr2: %d\n\n", *ptr2);
	
	printf("*ptr3: %d\n", *ptr3);
	printf("*ptr4: %d\n", *ptr4);

	// Testing comparision operators
	float a = (int)5.5;
	printf("\n%f\n", a);
	int b = 8;
	if (a == 5.5) {
		printf("\nTrue: %f\n", a);
	} else {
		printf("\nFalse: %f\n", a);
	}

	return 0;
}