#include <stdio.h>

int main () {
    float num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%f", &num);

    // Whole number part
    int whole = (int)num;
    
    while(whole > 0) {
        sum += whole % 10;
        whole /= 10;
    }

    // Decimal part
    float decimal = num - (int)num;
    printf("Decimal part of the number is: %f\n" , decimal);

    while(decimal > 0) {
        decimal *= 10;

        sum += (int)decimal;
        decimal -= (int)decimal;
    }

    printf("\n\nSum is: %d", sum);

}