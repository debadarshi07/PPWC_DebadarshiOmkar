#include <stdio.h>
#define dprintf(expr) printf(#expr " = %d\n", expr)
int main()
{
    int x = 17, y = 5;
    dprintf(x / y);
    return 0;
}

/*
    O/P
    x / y = 3
*/