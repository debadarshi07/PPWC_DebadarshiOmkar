#include <stdio.h>
int main() {
    int a = 5;
    printf("&a: %u\n", &a);
    printf("&a + 5: %u\n", &a + 5);

    int b = 5;
    int *ptr = &b;
    int **pptr = &ptr;
    // int ***ppptr = &ppptr;
    // int ****pppptr = &ppptr;

    printf("&b - &a: %d\n", &b - &a);
    // These are not allowed
    // printf("&b + &a: %d\n", &b + &a);
    // printf("&b * &a: %d\n", &b * &a);
    // printf("&b / &a: %d\n", &b / &a);

    int arr[] = {5,4,3,2,8};
    arr + 1;    // possible because we are not updating the arr value here
    //arr++;    // not possible because arr is a pointer constant
    int *p1 = arr;
    int *p2 = arr + 4;
    printf("p2 - p1: %u\n", p2 - p1);
}