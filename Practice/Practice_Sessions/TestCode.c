#include <stdio.h>
#include <string.h>

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
		printf("\nFalse: %f\n\n", a);
	}

	// Division and Modulus Operators
	printf("Operation\tQuotient\tRemainder\n");
	printf("7 / 3\t\t   %d\t\t   %d\n", 7 / 3, 7 % 3);
	printf("-7 / 3\t\t   %d\t\t   %d\n", -7 / 3, -7 % 3);
	printf("7 / -3\t\t   %d\t\t   %d\n", 7 / -3, 7 % -3);
	printf("-7 / -3\t\t   %d\t\t   %d\n\n", -7 / -3, -7 % -3);

	int arr[4][3] = {0};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n\n");

	char ch = getchar();
	putchar(ch);
	printf("\n\n");

	char *str = "#@Hello World";
	char str1[10];
	strcpy(str1, str);

	char *str2;
	str = &str[0] + 2;
	strcpy(str2, str);
	printf("str1: %s\n", str1);
	printf("str2: %s\n\n", str2);

	return 0;
}