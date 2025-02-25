#include <stdio.h>

int main() {
    char ch[] = "abcde";
    char *p[] = {ch + 3, ch + 2, ch, ch + 4, ch + 1};
    char **ptr;
    ptr = p + 3;
    printf("%d\n", ptr[0][1]);
    return 0;
}

/*
    O/P
    \0
*/