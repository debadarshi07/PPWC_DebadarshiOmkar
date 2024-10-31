#include <stdio.h>
#define MIN(x, y) (x) > (y) ? (x) : (y)
int main()
{
    int i = 10, j = 9, k = 0;
    k = MIN(i++, j++);
    printf("i=%d j=%d k=%d\n", i, j, k);
    return 0;
}

/*
    O/P
    i=12 j=10 k=11
*/