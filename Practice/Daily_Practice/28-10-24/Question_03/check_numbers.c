#include <stdio.h>
int main() {
    float x, minusSum = 0, plusSum = 0;
    int zeroCount = 0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    if (x == 0) {
        zeroCount++;
    } else if (x > 0) {
        plusSum += x;
    } else {
        minusSum += x;
    }

    printf("Zero Count: %d, Plus Sum: %.2f, Minus Sum: %.2f", zeroCount, plusSum, minusSum);

    return 0;
}