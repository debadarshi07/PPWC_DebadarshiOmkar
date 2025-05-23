#include <stdio.h>

void double_trouble(int *p, int y);
void trouble(int *x, int *y);
int main(void) {
    int x, y;
    trouble(&x, &y);
    printf("x = %d, y = %d\n", x, y);        // x = 13, y = 7
    return (0);
}

void double_trouble(int *p, int y) {
    int x;
    x = 10;
    *p = 2 * x - y;
}

void trouble(int *x, int *y) {
    double_trouble(x, 7);
    double_trouble(y, *x);
}