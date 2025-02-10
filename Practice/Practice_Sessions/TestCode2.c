#include <stdio.h>

int main() {
    int num1 = 10, num2 = 7;

    float num3 = num1 / num2;
    float num4 = (float)num1 / num2;
    float num5 = num1 / (float)num2;
    float num6 = (float)(num1 / num2);

    printf("num1 / num2: %f\n", num3);
    printf("(float)num1 / num2: %f\n", num4);
    printf("num1 / (float)num2: %f\n", num5);
    printf("(float)(num1 / num2): %f\n", num6);

    return 0;
}