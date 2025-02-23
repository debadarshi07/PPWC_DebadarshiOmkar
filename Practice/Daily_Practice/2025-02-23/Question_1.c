#include <stdio.h>

int main() {
    char *s[5] = {"London", "Birmingham", "Houston", "Milpitas", "Macau"};
    char **ptr[5] = {s, s+1, s+2, s+3, s+4};
    char ***p = ptr;

    printf("%s\n", **++p);
    printf("%s\n", *--*++p + 3);
    printf("%s\n", *(p[-2]) + 3);
    printf("%s\n", p[-1][-1] + 1);
    printf("%s\n", **p++);
    printf("%c\n", ***++p + 2);
    printf("%c\n", s[1][2]);

    return 0;
}

/*
    O/P
    Birmingham
    mingham
    don
    ondon
    Birmingham
    O
    r
*/