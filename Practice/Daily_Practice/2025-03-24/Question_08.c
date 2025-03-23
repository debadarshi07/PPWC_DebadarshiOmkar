#include <stdio.h>

static int counter = 0;
int foo(int a, int b) {
    int c;
    counter++;
    if (b == 2) return (a * a);
    else {
        return foo(a, b /2) + foo(a, b / 2) + foo(a, b / 2);
    }
}

int main() {
    printf("%d %d", counter, foo(2, 16));
    return 0;
}

/*
    O/P
    40 108
*/