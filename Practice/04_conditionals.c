#include <stdio.h>

int main () {
    int age = 5;
    if (age < 18) {
        printf("Can't vote\n");
    } else {
        printf("Can vote");
    }

    if (1) {
        printf("This will always print");
    }

    if (0) {
        printf("This will never print\n\n");
    }

    printf("\n%d", 'A');
}