#include <stdio.h>
#define get(s) #s
int main()
{
    char str[] = get(ITER is Good);
    printf("%s", str);
    return 0;
}

/*
    O/P
    ITER is Good
*/