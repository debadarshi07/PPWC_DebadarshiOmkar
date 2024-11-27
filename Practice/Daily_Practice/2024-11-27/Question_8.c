#include <stdio.h>
int main() {
    int x, y, z;
    y = y + 1;
    z = x + y;
    x = x + 1;
    return 0;
}

/*
    The three C language statements is equivalent to   z = (x++) + (++y)
*/