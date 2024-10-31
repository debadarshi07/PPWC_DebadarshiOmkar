#include <stdio.h>
#define macro(n, a, i, m) m##a##i##n
#define MAIN macro(n, a, i, m)
#define f(g, g2) g##g2
int MAIN()
{
    int var12 = 100;
    printf("Preprocessor:operator\n");
    printf("%d", f(var, 12));
    return 0;
}

/*
    O/P
    Preprocessor:operator
    100
*/