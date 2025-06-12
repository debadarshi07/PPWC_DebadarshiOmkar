#include <stdio.h>

int main() {
    int x = 0, y = 0, z = 0;
    int a = x && ++y || z++;
    printf("%d %d %d\n", x, y, z);

    int p = 1, q = 0, r = 0;
    int b = p && ++q || r++;
    printf("%d %d %d", p, q, r);
    return 0;
}

/*
    O/P
    0 0 1
    1 1 0
*/