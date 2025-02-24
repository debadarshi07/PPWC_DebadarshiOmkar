#include <stdio.h>
int main() {
    short unsigned int num = 65560;
    printf("%u\n", num);
    return 0;
}

/*
    O/P
    24

    When it is an unsigned number in n bit number representation, just use the below formula.
    number after overflow = original number % (2^n)
*/