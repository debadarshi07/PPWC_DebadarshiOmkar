#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter in decimal format: ");
    scanf("%d", &a);
    printf("Enter in octal format: ");
    scanf("%d", &b);
    printf("Enter in hexadecimal format: ");
    scanf("%d", &c);
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);
    
    printf("Enter in decimal format: ");
    scanf("%i", &a);
    printf("Enter in octal format: ");
    scanf("%i", &b);
    printf("Enter in hexadecimal format: ");
    scanf("%i", &c);
    printf("a = %i, b = %i, c = %i\n", a, b, c);
    return 0;
}

/*
    O/P
    Enter in decimal format: 15
    Enter in octal format: 020
    Enter in hexadecimal format: 18
    a = 15, b = 20, c = 18

    Enter in decimal format: 15
    Enter in octal format: 020
    Enter in hexadecimal format: 0x18
    a = 15, b = 16, c = 24
*/