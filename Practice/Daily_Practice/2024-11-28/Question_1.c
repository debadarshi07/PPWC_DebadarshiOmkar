#include <stdio.h>
int main(void) {
    int shifty;
    shifty = 0570;
    shifty = shifty >> 4;
    shifty = shifty << 6;
    printf("The value of shifty is %o", shifty);
}

/*
    O/P
    The value of shifty is 2700
*/