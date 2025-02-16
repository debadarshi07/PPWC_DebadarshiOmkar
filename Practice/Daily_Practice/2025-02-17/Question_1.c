#include <stdio.h>
int bar(int);
int foo(int j) {
    static int a = 0;
    if (j == 1) return 1;
    a = a + 1;
    return a + bar(j - 2);
}

int bar(int i) {
    static int a = 0;
    if (i == 1) return 1;
    a = a + 1;
    return a + foo(i - 1);
}

int main() {
    printf("%d\n", bar(10));
    return 0;
}

/*
    O/P
    19

    As there are static a's, even during recursion backtracking we have to consider the updated values of both the a's.
*/