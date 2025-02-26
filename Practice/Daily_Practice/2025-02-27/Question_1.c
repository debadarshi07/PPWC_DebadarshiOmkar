#include <stdio.h>

void cpy(char *t, char *s) {
    while (*t++ = *s++);   // Assignment operators perform assignment task then returns the assigned value.
}

int main() {
    char s[20] = "Debadarshi\0Om\0kar";
    char q[20];
    cpy(q, s);

    printf("%s\n", q);
    printf("%s\n%s\n", q + 11, q + 14);

    return 0;
}