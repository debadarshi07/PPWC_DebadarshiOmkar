#include <stdio.h>

int f(int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        x = x + x + y;
    }
    return x;
}

int main() {
    int x = 20, y = 10;
    printf("For x = 20 and y = 10, output will be: %d\n", f(x, y));

    x = 20, y = 20;
    printf("For x = 20 and y = 10, output will be: %d\n", f(x, y));

    x = 10, y = 20;
    printf("For x = 20 and y = 10, output will be: %d\n", f(x, y));

    return 0;
}

/*
    O/P
    (c) If the inputs are x=20, y=10, then the return value is less than 2^10
*/