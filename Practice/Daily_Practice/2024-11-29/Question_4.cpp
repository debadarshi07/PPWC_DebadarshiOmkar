#include <stdio.h>

void square(int *x) {
    *x = (*x)++ * (*x);
}
void square(int *x, int *y) {
    *x = (*x) * --(*y);
}

int main() {
    int number = 30;
    square(&number, &number);
    printf("%d\n", number);
    return 0;
}

/*
    O/P
    870
*/