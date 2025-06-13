#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int ans = a > b ? 10 : a++ > b++ ? 20 : 30;
    printf("%d %d %d", a, b , ans);
    return 0;
}

/*
    O/P
    5 3 10
*/