#include <stdio.h>
int main() {
    int a[] = {10, 20, 30, 40, 50};
    int i, *b, *b1;
    b = a;
    b1 = a + 4;
    i = b1 - b;
    printf("%d\n", i);
    return 0;
}