#include <stdio.h>
int f(int n) {
    static int i = 1;
    if (n >= 5) return n;
    n = n + i;
    i++;
    return f(n);
}

int main() {
    printf("%d\n", f(1));
    return 0;
}

/*
    O/P
    7
*/
// note - In C static variables can be defined inside a method, which retains the value of the variable. [unlike Java]