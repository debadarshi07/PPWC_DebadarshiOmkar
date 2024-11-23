#include <stdio.h>

int main() {
    int num1 = 5, num2 = 7, *num1Add = &num1, *num2Add = &num2;

    printf("Before Swapping.\n");
    printf("%d --> %p\n%d --> %p\n", num1, num1Add, num2, num2Add);

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping.\n");
    printf("%d --> %p\n%d --> %p\n", num1, num1Add, num2, num2Add);

    return 0;
}

// Yes, the addresses before and after swapping are equal. Because whenever we declare a variable with a particular data type, specific size of memory block is assigned to it during compilation time. Hence, changing the value of the variable doesn't make any difference with its address because addressing is all about the reference from stack to heap.