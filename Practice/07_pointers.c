#include <stdio.h>
void changeValue(int*, int*);
void changeValue(int* a, int* b) {
    *a = 20;
    *b = 22;
}

int main () {
    int i = 45;
    int* j = &i;
    printf("%p\n", j);
    printf("%u\n", j);

    printf("%d\n", *(j));
    printf("The address of the address of i is: %u\n", &(j));

    printf("Address of character variables with pointers to pointer.\n\n");
    char c = 'D';
    char* d = &c;
    char** e = &d;

    printf("The value of c is: %c\n\n", c);
    printf("The address of c is: %p\n\n", d);
    printf("The address of d is: %p\n\n", e);
    printf("Value of c is: %c\n\n", **(e));

    // Call by reference
    int a = 5, b = 6;
    printf("Before changing values: a = %d , b = %d\n\n", a , b);
    changeValue(&a, &b);
    printf("After changing values: a = %d , b = %d\n\n", a, b);

    return 0;
}