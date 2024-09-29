#include <stdio.h>

int main () {
    float length, bredth;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter bredth of rectangle: ");
    scanf("%f", &bredth);

    printf("The area of the rectangle of given length and bredth is: %f", length * bredth);
    return 0;
}