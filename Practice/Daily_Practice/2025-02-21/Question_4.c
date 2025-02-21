#include <stdio.h>

int main() {
    char s[20] = "abcdef";

    printf("%s\n", s);      // abcdef

    s[3] = 97;
    printf("%s\n", s);      // abcaef

    s[3] = 0;
    printf("%s\n", s);      // abc

    s[3] = '0';
    printf("%s\n", s);      // abc0ef
    printf("%s\n", *s);     // error

    printf("%c\n", s + 3);      // error
    printf("%s\n", s + 3);      // 0ef
    printf("%c\n", *(s + 3));       // 0
}