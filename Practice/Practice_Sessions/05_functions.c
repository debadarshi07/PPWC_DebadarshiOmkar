#include <stdio.h>
int sum(int, int);
int sum (int a , int b) {
    return a + b;
}

int main () {
    printf("%d", sum(5, 8));

    return 0;
}