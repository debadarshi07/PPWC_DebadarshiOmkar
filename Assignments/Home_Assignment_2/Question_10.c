#include <stdio.h>

int f1(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
}

int f2(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 4, b = 5, c = 6;
    f1(a, b);
    f2(&b, &c);
    printf("%d", c - a - b);
}

/*
    O/P
    -5
    It's because while we call f1() function it makes no difference with the variables as the primitive variables are passed as arguments and primitive datas follow call by values. But when we call f2() function, it swaps the values of b and c because instead of primitive values we have passed the pointer references as arguments which typically follow call by reference. Hence, 5 - 6 - 4 = -5
*/