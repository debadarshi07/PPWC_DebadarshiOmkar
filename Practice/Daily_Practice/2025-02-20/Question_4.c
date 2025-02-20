#include <stdio.h>
int main() {
    static int a[] = {14, 27, 73, 40, 50};
    static int *p[] = {a, a + 3, a + 4, a + 1, a + 2};
    int **ptr = p;
    ptr++;
    printf("%d%d", ptr - p, **ptr);
    return 0;
}