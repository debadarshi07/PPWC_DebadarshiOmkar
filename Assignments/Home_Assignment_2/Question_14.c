#include <stdio.h>

void swap(int *, int *);
int main() {
    int a = 10, b = 20;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}

void swap(int *p, int *q) {
    p = q;
    *p = 100;
    *q = 20;
}

/*
    O/P
    10 20
    We need to remember that the 20 is not the same 20 that is assigned to b inside main function. It is the 20 which has been assigned through swap function. The reason why the variable a didn't change is that inside the swap function we have written p = q, so now p and q are pointing to the same address block in memory. Then we are updating p and q, as a result only the variable b is getting updated twice first as 100 and then as 20.
*/