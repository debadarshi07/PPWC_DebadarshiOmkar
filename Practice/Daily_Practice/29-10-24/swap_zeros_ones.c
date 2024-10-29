#include <stdio.h>
#include <string.h>

int main() {
    char number[30];
    printf("Enter a number: ");
    scanf("%s", &number);
    printf("Initially number is: %s\n", number);

    for (int i = 0; i < strlen(number); i++) {
        if (number[i] == '0') {
            number[i] = '1';
        } else if(number[i] == '1') {
            number[i] = '0';
        }
    }

    printf("Manipulated number is: %s\n", number);
    return 0;
}