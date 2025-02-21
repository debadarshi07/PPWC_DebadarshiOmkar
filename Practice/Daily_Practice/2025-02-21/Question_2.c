#include <stdio.h>
int main() {
    char str1[10] = "Hello";
    char str2[10] = "Hello";
    if (str1 == str2)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}

/*
    O/P
    False
*/