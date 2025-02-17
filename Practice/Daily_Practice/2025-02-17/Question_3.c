#include <stdio.h>

int bar() {
    static int x = 12;
    x -= 3;
    return x;
}

int foo() {
    static int x = 1;
    x += 10;
    return bar(10);
}


int main() {
    int x, y;
    x = foo();
    y = bar() + x;
    printf("%d\n", (x + y));
    return 0;
}

/*
    O/P
    24
*/