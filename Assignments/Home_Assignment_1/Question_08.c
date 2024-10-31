#define x 97
#define x 65
#include <stdio.h>
int main()
{
    printf("x+x=%d\n", x + x);
    printf("%d %c\n", x, x);
    printf("%d", x + 5 + x / 5);
    return 0;
}

/*
The code has nothing wrong though macros has been redefined but still it's okay. The code ran perfectly fine.
    O/P
    x+x=130
    65 A
    83
*/