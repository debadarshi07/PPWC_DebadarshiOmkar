#include <stdio.h>
#include <float.h>

int main () {
    printf("Max value of float: %f\n", FLT_MAX);
    return 0;
}

/*
    The maximum value that can be stored in float is: 340282346638528860000000000000000000000.000000
    C language follows IEE 754 standard for floating point arithmetic which is a 32 bit representation.
*/