#include <stdio.h>

int main() {
    char ch = 'A';
    printf("%d\n", sizeof(ch));
    printf("%d", sizeof('A'));
    return (0);
}

/*
    The output will be 1 and 4. Because in the first line we have defined a character variable, hence there must be a memory block allocation for that variable i.e of size 1 as it is of char data type and when size of a direct character literal is counted, it counts the size of the character's ASCII which is obviously an integer and size of int is 4.
*/