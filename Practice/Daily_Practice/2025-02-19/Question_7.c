#include <stdio.h>
void main() {
    int a[5] = {10,20,30,40,50};
    int *p[5] = {a, a+1, a+2, a+3, a+4};
    int **ptr = p;
    ptr++;
    printf("%u\t%u\t%u\n", ptr - p, *ptr - a, **ptr);
    *ptr++;
    printf("%u\t%u\t%u\n", ptr - p, *ptr - a, **ptr);
    *++ptr;
    printf("%u\t%u\t%u\n", ptr - p, *ptr - a, **ptr);
    ++*ptr;
    printf("%u\t%u\t%u\n", ptr - p, *ptr - a, **ptr);

}

/*
    O/P
    1       1       20
    2       2       30
    3       3       40
    3       4       50
*/