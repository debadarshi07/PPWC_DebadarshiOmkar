#include <stdio.h>

int main() {
    printf("\nOne dimensional Array\n");
    int marks[5];
    marks[0] = 20;
    marks[1] = 21;
    marks[2] = 22;
    marks[3] = 23;
    marks[4] = 24;

    printf("\nmarks: %u\n", marks);
    printf("&marks: %u\n\n", &marks);

    printf("&marks[0]: %u\n", &marks[0]);
    printf("&marks[1]: %u\n", &marks[1]);
    printf("&marks[2]: %u\n", &marks[2]);
    printf("&marks[3]: %u\n", &marks[3]);
    printf("&marks[4]: %u\n\n", &marks[4]);

    printf("*(&marks[3]): %d\n\n", *(&marks[3]));

    printf("marks + 1: %u\n", marks + 1);
    printf("marks + 2: %u\n\n", marks + 2);

    printf("&marks + 1: %u\n", &marks + 1);
    printf("&marks + 2: %u\n\n", &marks + 2);

    printf("*(marks + 1) is: %d\n", *(marks + 1));
    printf("*(marks + 2): %d\n\n", *(marks + 2));

    printf("*marks: %d\n", *marks);
    printf("*marks + 1: %d\n", *marks + 1);
    printf("*marks + 2: %d\n\n", *marks + 2);

    int *add1 = &(marks[0]), *add2 = &(marks[1]), *add3 = &(marks[2]), *add4 = &(marks[3]), *add5 = &(marks[4]);
    printf("&(add1): %u\n", &(add1));
    printf("&(add2): %u\n", &(add2));
    printf("&(add3): %u\n", &(add3));
    printf("&(add4): %u\n", &(add4));
    printf("&(add5): %u\n\n", &(add5));

    printf("Elements of marks are: ");
    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        printf("%d ", marks[i]);
    }
    printf("\n\n---------------------------------");
    printf("\n\n");

    printf("\nMultidimensional Array\n");
    // Multidimensional Array
    int myArr[3][2] = {{10, 20}, {30, 40}, {50, 60}};

    printf("\nmyArr: %u\n", myArr);
    printf("&myArr: %u\n", &myArr);
    printf("*(&myArr): %u\n", *(&myArr));
    printf("*myArr: %u\n", *myArr);
    printf("**myArr: %d\n\n", **myArr);

    printf("myArr[0]: %u\n", myArr[0]);
    printf("&myArr[0]: %u\n", &myArr[0]);
    printf("&myArr[0][0]: %u\n", &myArr[0][0]);
    printf("&myArr[0][1]: %u\n\n", &myArr[0][1]);

    printf("myArr[1]: %u\n", myArr[1]);
    printf("&myArr[1]: %u\n", &myArr[1]);
    printf("&myArr[1][0]: %u\n", &myArr[1][0]);
    printf("&myArr[1][1]: %u\n\n", &myArr[1][1]);

    printf("myArr[2]: %u\n", myArr[2]);
    printf("&myArr[2]: %u\n", &myArr[2]);
    printf("&myArr[2][0]: %u\n", &myArr[2][0]);
    printf("&myArr[2][1]: %u\n\n", &myArr[2][1]);

    printf("myArr: %u\n", myArr);
    printf("myArr + 1: %u\n", myArr + 1);
    printf("myArr + 2: %u\n\n", myArr + 2);

    printf("&myArr: %u\n", &myArr);
    printf("&myArr + 1: %u\n", &myArr + 1);
    printf("&myArr + 2: %u\n\n", &myArr + 2);

    printf("*myArr: %u\n", *myArr);
    printf("*myArr + 1: %u\n", *myArr + 1);
    printf("*myArr + 2: %u\n\n", *myArr + 2);

    printf("*(&myArr): %u\n", *(&myArr));
    printf("*(&myArr) + 1: %u\n", *(&myArr) + 1);
    printf("*(&myArr) + 2: %u\n\n", *(&myArr) + 2);

    printf("myArr[0]: %u\n", myArr[0]);
    printf("myArr[0] + 1: %u\n", myArr[0] + 1);
    printf("myArr[0] + 2: %u\n\n", myArr[0] + 2);

    printf("&myArr[0] + 1: %u\n", &myArr[0] + 1);
    printf("&myArr[0][0] + 1: %u\n", &myArr[0][0] + 1);
    printf("&myArr[0][1] + 1: %u\n\n", &myArr[0][1] + 1);

    return 0;
}

// Conclusions:
// 'marks' refers address of the first element individually.
// Hence 'marks + 1' is the address of the second element.
// '&marks' refers address of the first element but from array's pov.
// Hence '&marks + 1' is the address appears after the entire array.