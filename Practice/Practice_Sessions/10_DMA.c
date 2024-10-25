#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    int *ptr;

    // malloc()
    // printf("Enter the size n: ");
    // scanf("%d", &n);

    // ptr = (int*) malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++) {
    //     printf("Enter element %d: ", i+1);
    //     scanf("%d", ptr + i);
    // }

    // printf("\nElements entered are: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", ptr[i]);
    // }

    // printf("\nElements entered are: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", *(ptr + i));
    // }
    // printf("\n\nptr: %d\n", ptr);
    // printf("*ptr: %d\n", *ptr);
    // printf("&ptr: %d\n", &ptr);


    // calloc()
    printf("Enter the size n: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n , sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", ptr + i);
    }

    printf("\nElements entered are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\nElements entered are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n\nptr: %d\n", ptr);
    printf("*ptr: %d\n", *ptr);
    printf("&ptr: %d\n\n", &ptr);

    // realloc()
    // printf("Enter the new size: ");
    // scanf("%d", &n);
    // ptr = (int*) realloc(ptr, n * sizeof(int));

    // Default value checking
    // int *ptr1, *ptr2;
    // ptr1 = (int*) malloc(5 * sizeof(int));
    // ptr2 = (int*) calloc(5, sizeof(int));

    // printf("ptr1: %d\n", ptr1);
    // printf("ptr2: %d\n\n", ptr2);

    // printf("*ptr1: %x\n", *ptr1); // Garbage value
    // printf("*ptr2: %x\n\n", *ptr2); // Always intializes with 0

    free(ptr);
   // ptr = NULL; // To make sure ptr can never be accessed again until it's reallocated
    // free(ptr1);
    // free(ptr2);

    // Checking what happens on freeing the dynamically allocated memory.
    // printf("ptr after free: %d\n", ptr);
    // printf("ptr[0]: %d\n", ptr[0]);
    // printf("ptr[1]: %d\n", ptr[1]);
    // printf("ptr[2]: %d\n", ptr[2]);
    // printf("ptr[3]: %d\n", ptr[3]);
    // printf("ptr[4]: %d\n\n", ptr[4]);

    // printf("ptr1 after free: %d\n", ptr1);
    // printf("ptr2 after free: %d\n", ptr2);

    return 0;
}