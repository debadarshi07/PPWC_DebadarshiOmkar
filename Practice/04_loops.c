#include <stdio.h>

int main () {
    // while loop 
    int a = 0;
    while (a++ < 5) {
        printf("%d ", a);
    } 

    printf("\n\n");

    // do while loop
    do {
        printf("%d ", a);
    }  while (a++ < 10);

    printf("\n\n");

    // for loop
    for (int i = a; i >= 0; i--) {
        printf("%d ", i);
    }

    // Table of a number
    printf("\n\nEnter a number: ");
    int num;
    scanf("%d", &num);

    for(int i = 0; i < 11; i++) {
        printf("%d * %d = %d\n", num , i , (num*i));
    }

}