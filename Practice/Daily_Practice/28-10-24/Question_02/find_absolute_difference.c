#include <stdio.h>
int main() {
    float x, y;
    printf("Enter the value of x and y separating by a space: ");
    scanf("%f %f", &x, &y);

    y = x > y ? x - y : y - x ;
    
    printf("The difference between x and y is: %.2f\n", y);
    return 0;
}