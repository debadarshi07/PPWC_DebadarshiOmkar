#include <stdio.h>

int main() {
    char *p = "GATE2011";
    printf("%s", p + p[3] - p[1]);
    return 0;
}

/*
    O/P
    2011
*/