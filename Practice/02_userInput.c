#include <stdio.h>

int main () {
    int a;
    printf("Enter a decimal number: ");
    scanf("%d", &a);

    float b;
    printf("Enter a float number: ");
    scanf("%f", &b);
    // Another character input is taken here to replace the buffer value
    scanf("%c", &b);

    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("User given interger input is: %d\n", a);
    printf("User given float input is: %f\n", b);
    printf("User given character input is: %c\n", c);
    return 0;
}