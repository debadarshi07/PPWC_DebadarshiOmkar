#include <stdio.h>

int main() {
    int a = 12, b = 25, c = 18;
    int *ptr;

    ptr = &a;
    *ptr += 10;
    printf("Value of a is: %d", a);

    ptr = &b;
    *ptr += 10;
    printf("\nValue of b is: %d", b);

    ptr = &c;
    *ptr += 10;
    printf("\nValue of c is: %d\n", c);

    return 0;
}