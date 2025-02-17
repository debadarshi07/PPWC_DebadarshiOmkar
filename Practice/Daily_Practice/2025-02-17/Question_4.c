#include <stdio.h>

int bar(int y) {
    static int x = 12;
    x -= y;
    return x;
}

int foo() {
    static int x = 1;
    x += 10;
    return bar(10);
}

int main() {
    int x = 10, y;
    y = foo(bar(x)) + x;
    printf("%d\n", (x + y));
    return 0;
}

/*
    O/P
    12
*/