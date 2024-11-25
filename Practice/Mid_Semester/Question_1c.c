#include <stdio.h>
int main() {
    int number = 4325187;
    int num = number;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }

    printf("The number of digits in %d is %d.\n", number, count);
    return 0;
}