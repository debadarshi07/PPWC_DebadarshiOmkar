#include <stdio.h>
int main() {
    int a[] = {10, 20, 30, 40, 50};
    int i, *b;
    b = a + 4;
    printf("%d\n", b[-1]);
    return 0;
}