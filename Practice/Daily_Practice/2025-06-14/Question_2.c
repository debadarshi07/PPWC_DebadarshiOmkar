#include <stdio.h>

int main() {
    int a = 5 > 4 ? 6 > 7 ? 10 : 20 : 30;
    int b = 2 > 3 ? 5 > 4 ? 10 : 30 : 8 > 7 ? 30 : 40;
    printf("%d\n", a);
    return 0;
}

/*
    O/P
    20
*/