#include <stdio.h>
int main() {
    int i, j, b[] = {2, 3, 4, 5, 6}, *p, **p1;
    p = b + 2;
    p1 = &p;
    p[2] = 22;
    p1[0][2] = p1[0][2] + 22;
    *p++;
    i = (*p)++;
    j = **p1++;
    printf("%d\t", i + j + b[4]);
    return 0;
}

/*
    O/P
    55
*/