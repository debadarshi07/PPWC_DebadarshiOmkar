#include <stdio.h>

void cse(int *, int);
int main() {
    int a = 111;
    printf("%d\n", a);
    cse(&a, a);
    printf("%d\n", a);
    printf("%d\n", *(&a));
    return 0;
}
void cse(int *x, int y) {
    *x = 222;
}

/*
    O/P
    111
    222
    222
*/