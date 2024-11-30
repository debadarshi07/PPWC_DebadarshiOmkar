#include <stdio.h>
int main() {
    static int a = 3;
    printf("%d", a--);
    if (a)
        main();
}

/*
    O/P
    321
*/