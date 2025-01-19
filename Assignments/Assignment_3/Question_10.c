#include <stdio.h>
#include <string.h>
#include <math.h>

void binaryToHex(char *binary) {
    int length = strlen(binary);
    int decimalValue = 0, power = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimalValue += pow(2, power);
        }
        power++;
    }
    printf("Hexadecimal: %X\n", decimalValue);
}

int main() {
    char binary[30];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToHex(binary);

    return 0;
}