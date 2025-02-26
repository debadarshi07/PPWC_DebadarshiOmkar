#include <stdio.h>
#include <string.h>

void main() {
    char ch[20] = "Parakram";
    strcpy(ch, "Vijay");
    printf("%s\n", ch);
    printf("%s\n", ch + 6);
}

/*
    O/P
    Vijay
    am
*/