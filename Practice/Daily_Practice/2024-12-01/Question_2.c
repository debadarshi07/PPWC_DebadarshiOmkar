#include <stdio.h>
void foo(int x, int y) {
    x += y;
    y += x;
}

int main() {
    int x = 5.5;
    foo(x, x);
}

/*
    The final value of x in both call by value and call by reference are 5 and 20 respectively.
*/