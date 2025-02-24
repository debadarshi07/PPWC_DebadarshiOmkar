#include <stdio.h>
int main() {
    short int num = -32771;
    printf("%d", num);
    return 0;
}

/*
    O/P
    32765

    When it is a -ve number in n bit number representation, then use below formula.
    step i: a = original number % (2^n)
    step ii: number after overflow = -((2^n) - |a|)
*/