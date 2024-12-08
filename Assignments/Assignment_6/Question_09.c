#include <stdio.h>

int main() {
    register int a = 10;
    int *ptr = NULL;
    ptr = &a;
    *ptr = 5;
    printf("%d", *ptr);
    return (0);
}

/*
    Error: ptr = &a

    Because a is a register variable and we can't access the address of a register variable.
*/