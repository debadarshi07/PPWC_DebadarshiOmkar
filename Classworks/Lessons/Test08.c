#include <stdio.h>
#include <stdlib.h>

int main () {
/*
	// malloc()

	int *p, n, i;
	printf("Enter number of integer to be entered: ");	
	scanf("%d", &n);
	
	// malloc declaration
	p = malloc(n * sizeof(int));
	printf("u: %u\n\n", p);
	printf("d: %d\n\n", p);
	printf("c: %c\n\n", p);
	int *p1 = (int*) p;
	printf("p1: %u\n\n", p1);
	if (p == NULL) {
		printf("Memory not available \n");	
		exit(1);
	}
	
	// Taking numbers from user input
	for (i = 0; i < n; i++) {
		printf("Enter an integer: ");
		scanf("%d", p + i);
	}
	
	printf("\n\n");
	printf("Integers are:\t");
	
	// Displaying elements
	for (i = 0; i < n; i++) {
		printf("%d\t", *(p + i));
	}
	
	free(p);
	printf("\n\n");
	
*/
/*
	// calloc()

	int *p, n, i;
	printf("Enter number of integer to be entered: ");	
	scanf("%d", &n);
	
	// malloc declaration
	p = calloc(n, sizeof(int));
	printf("u: %u\n\n", p);
	printf("d: %d\n\n", p);
	printf("c: %c\n\n",p);
	int *p1 = (int*) p;
	printf("p1: %u\n\n", p1);
	if (p == NULL) {
		printf("Memory not available \n");	
		exit(1);
	}
	
	// Taking numbers from user input
	for (i = 0; i < n; i++) {
		printf("Enter an integer: ");
		scanf("%d", p + i);
	}
	
	printf("\n\n");
	printf("Integers are:\t");
	
	// Displaying elements
	for (i = 0; i < n; i++) {
		printf("%d\t", *(p + i));
	}
	free(p);
	printf("\n\n");
	
*/

	// realloc()
	
	int i, *ptr, n;
	ptr = (int*) malloc(n * sizeof(int));
	printf("Enter number of integers to be entered: ");
	scanf("%d", &n);
	
	if (ptr == NULL) {
		printf("Memory not available\n");
		exit(1);
	}
	
	for(i = 0; i < n; i++) {
		*(ptr + i) = i * 2;
	}
	
	ptr = (int*) realloc(ptr, 2 * sizeof(int));
	if (ptr == NULL) {
		printf("Memory not available.\n");
		exit(1);
	}
	
	for (i = 0; i < n; i++) {
		printf("%d\t", *(ptr + i));
	}
	
	free(ptr);
	
	printf("\n\n");
	return 0;
}