#include <stdio.h>
int main() {
    short int num = 32770;
    printf("%d", num);
    return 0;
}

/*
    O/P
    -32766

    When it is a signed number in n bit number representation, just use the below formula.
    step i: a = original number % (2^n)
    step ii: number after overflow = -((2^n) - a)
*/