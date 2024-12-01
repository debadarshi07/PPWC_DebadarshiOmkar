#include <stdio.h>

int main() {
    int marks[5];
    marks[0] = 25;
    marks[1] = 21;
    marks[2] = 28;
    marks[3] = 27;
    marks[4] = 30;

    printf("\nAddress of marks array is: %u\n", marks);
    printf("Address of marks array is: %u\n", &(marks));
    printf("Address of marks[0] is: %u\n", &marks[0]);
    printf("Address of marks[1] is: %u\n", &marks[1]);
    printf("Address of marks[2] is: %u\n", &marks[2]);
    printf("4th element of marks array is: %d\n", *(&marks[3]));
    printf("marks + 1: %u\n" ,marks + 1);
    printf("marks + 2: %u\n" ,marks + 2);

    printf("Element at marks + 1 is: %d\n", *(marks + 1));
    printf("Element at marks + 2 is: %d\n", *(marks + 2));

    int *add1 = &(marks[0]), *add2 = &(marks[1]);
    printf("Address of marks[0] block is: %u\n", &(add1));
    printf("Address of marks[1] block is: %u\n\n", &(add2));

    int arr[] = {1, 2, 3};
    printf("Elements of arr is: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n----------------------------------------------");
    printf("\n\n");

    // Multidimensional Array
    int myArr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    printf("The address of myArr is: %u\n", &myArr);
    printf("The address of myArr[0] is; %u\n", &myArr[0]);
    printf("The address of myArr[0][0] is: %u\n", &myArr[0][0]);
    printf("The address of myArr[1] is: %u\n", &myArr[1]);
    printf("The address of myArr[1][0] is: %u\n", &myArr[1][0]);
    printf("myArr + 1: %u\n", myArr + 1);
    printf("myArr + 2: %u\n", myArr + 2);

    int (*ptr)[5] = &arr;
    printf("%p\n", arr);
    printf("%d", *ptr);
    return 0;
}