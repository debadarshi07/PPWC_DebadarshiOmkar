#include <stdio.h>

void foo(char *a) {
    if (*a) {
        foo(++a);
        putchar(*a);
        foo(a + 1);
        putchar(*a);
    }
}

int main() {
    foo("abcd");
    return 0;
}