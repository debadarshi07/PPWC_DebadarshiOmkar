#include <stdio.h>

int main() {
    short int a = 300;
    char *ptr = (char*)&a;
    ptr++;
    *ptr = 2;
    printf("%d\n", a);
    return 0;
}

/*
    O/P
    556

    This is according to little endian compilers.
*/