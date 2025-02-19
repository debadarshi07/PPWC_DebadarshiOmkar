#include <stdio.h>

void main() {
    int a[5] = {0, 1, 2, 3, 4};
    int *p[5] = {a + 2, a + 1, a + 3, a, a + 4};
    int **ptr = p;

    **ptr++;
    printf("%u\t%u\t%u\n", ptr - p, *ptr - a, **ptr);
    *++*ptr;
    printf("%u\t%u\t%u\n", ptr - p, *ptr - a, **ptr);
    ++**ptr;
    printf("%u\t%u\t%u\n", ptr - p, *ptr - a, **ptr);

}

/*
    O/P
    1       1       1
    1       2       2
    1       2       3
*/