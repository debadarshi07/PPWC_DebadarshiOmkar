#include <stdio.h>
int sum(int, int);
int sum (int a , int b) {
    return a + b;
}

// Pass by value
void change_by_value(int a) {
    a = 6;
}

// Pass by reference
void change_by_reference(int *a) {
    *a = 9;
}

int main () {
    printf("Addition of given values: %d\n", sum(5, 8));

    int num = 15;
    change_by_value(num);
    printf("After changing by value num: %d\n", num);

    change_by_reference(&num);
    printf("After changing by reference num: %d\n", num);

    return 0;
}