#include <stdio.h>
#define MMM 10 + 20
int main()
{
    printf("x=%d\n", MMM * MMM);
    return 0;
}

/*
    O/P
    x=230
    This is because of the usecase macro MMM. Wherever we use it comes as it is. MMM * MMM means 10 + 20 * 10 + 20 , which becomes 10 + (20 * 10) + 10 = 230.
    We should have use macros within bracket to get the intended result.
    #define MMM (10 + 20)
*/