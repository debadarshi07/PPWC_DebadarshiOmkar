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
    printf("Address of marks[3] is: %u\n", &marks[3]);
    printf("Address of marks[4] is: %u\n\n", &marks[4]);
    printf("4th element of marks array is: %d\n\n", *(&marks[3]));
    printf("marks + 1: %u\n" ,marks + 1);
    printf("marks + 2: %u\n\n" ,marks + 2);

    printf("Element at marks + 1 is: %d\n", *(marks + 1));
    printf("Element at marks + 2 is: %d\n\n", *(marks + 2));

    int *add1 = &(marks[0]), *add2 = &(marks[1]), *add3 = &(marks[2]), *add4 = &(marks[3]), *add5 = &(marks[4]);
    printf("Address of the address of marks[0] block is: %u\n", &(add1));
    printf("Address of the address of marks[1] block is: %u\n", &(add2));
    printf("Address of the address of marks[2] block is: %u\n", &(add3));
    printf("Address of the address of marks[3] block is: %u\n", &(add4));
    printf("Address of the address of marks[4] block is: %u\n\n", &(add5));

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
    printf("The address of myArr[0][1] is: %u\n", &myArr[0][1]);
    printf("The address of myArr[1] is: %u\n", &myArr[1]);
    printf("The address of myArr[1][0] is: %u\n", &myArr[1][0]);
    printf("The address of myArr[1][1] is: %u\n", &myArr[1][1]);
    printf("The address of myArr[2] is: %u\n", &myArr[2]);
    printf("The address of myArr[2][0] is: %u\n", &myArr[2][0]);
    printf("The address of myArr[2][1] is: %u\n\n", &myArr[2][1]);

    printf("myArr + 1: %u\n", myArr + 1);
    printf("myArr + 2: %u\n\n", myArr + 2);

    printf("&myArr + 1: %u\n", &myArr + 1);
    printf("&myArr[0] + 1: %u\n", &myArr[0] + 1);
    printf("&myarr[0][0] + 1: %u\n", &myArr[0][0] + 1);
    printf("&myarr[0][1] + 1: %u\n\n", &myArr[0][1] + 1);
    return 0;
}