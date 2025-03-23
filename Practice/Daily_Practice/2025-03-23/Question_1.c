#include <stdio.h>

int main() {
    int i = 15, j = 240;
    i = i && j & i;
    j = i | j || i;
    printf("%d %d", i, j);
    return 0;
}

/*
    O/P
    0 1
*/