#include <stdio.h>
#define AH 65
int main()
{
    printf("%d\n", AH);
    #define AH 41
    printf("%d\n", AH);
    return 0;
}

/*
    O/P
    65
    41
*/