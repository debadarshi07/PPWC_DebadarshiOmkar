#include <stdio.h>
int main() {
    int k = 5;
    int *p = &k;
    int **m = &p;
    printf("%d %d %d", k, *p, **m);
}

/*
    O/P
    5 5 5
*/