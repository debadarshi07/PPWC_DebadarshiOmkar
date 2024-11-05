#include <stdio.h>

int main() {
    int i;
    int *pi = &i;
    scanf("%d", pi);
    printf("%d\n", i + 5);
    return 0;
}

/*
    O/P
    (d) On execution, the value printed is 5 more than the integer value entered.
*/