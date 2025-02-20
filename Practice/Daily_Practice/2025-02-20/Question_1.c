#include <stdio.h>

int main() {
    int i, b[] = {2, 3, 4, 5, 6}, *p;
    p = b;
    ++*p;
    printf("%d\t", *p);
    p += 2;
    printf("%d\n", *p);
    return 0;
}

/*
    O/P
    3     4
*/