#include <stdio.h>

int main() {
    float item, product;
    printf("Enter the value of item: ");
    scanf("%f", &item);
    printf("Enter the initial value of product: ");
    scanf("%f", &product);

    if (item != 0) {
        product *= item;
    }
    
    printf("The value of product = %.2f", product);
    return 0;
}