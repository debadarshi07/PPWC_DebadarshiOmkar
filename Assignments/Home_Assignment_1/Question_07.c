#define SUM 100
#include <stdio.h>
int main()
{
    // SUM = 200; // error line
    printf("%d", SUM);
    return 0;
}

/*
    This will throw a compilation time error as updation in Macros is not possible as variables. These act as constants in C.
*/