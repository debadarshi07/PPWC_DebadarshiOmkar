#include <stdio.h>
int main() {
    int a, *b = &a, **c = &b;
    a = 4;
    **c = 5;
}

/*
    Assigns 5 to a.
*/