#include <stdio.h>

int main() {
    int item, product;
    printf("Enter an integer as item: ");
    scanf("%d", &item);
    printf("Enter the initial value of product: ");
    scanf("%d", &product);

    if (item != 0) {
        product *= item;
    }
    
    printf("The value of product = %d", product);
    return 0;
}