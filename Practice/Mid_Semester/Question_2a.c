#include <stdio.h>

void fun1(int);
void fun2(int);

void fun1(int n) {
    if (n == 0)
        return;
    printf(" %d ", n);
    fun2(n - 2);
    printf(" %d ", n);
}

void fun2(int n) {
    if (n == 0)
        return;
    printf(" %d ", n);
    fun1(++n);
    printf(" %d ", n);
}

int main() {
    fun1(15);
    return 0;
}

/*
    O/P
    15  13  14  12  13  11  12  10  11  9  10  8  9  7  8  6  7  5  6  4  5  3  4  2  3  1  2  2  2  3  3  4  4  5  5  6  6  7  7  8  8  9  9  10  10  11  11  12  12  13  13  14  14  15
*/