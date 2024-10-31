#include <stdio.h>
#define PRINT(int) printf("int=%d\n", int)
int main()
{
    int x = 03, y = 32, z = 01;
    PRINT(x^x);
    z <<= 3;
    PRINT(z);
    y >>= 3;
    PRINT(y);
    return 0;
}

/*
    O/P
    int=0
    int=8
    int=4
*/