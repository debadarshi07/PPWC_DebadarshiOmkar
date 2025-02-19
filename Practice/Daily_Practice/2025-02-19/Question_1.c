#include <stdio.h>

void fun(int *ptr, int x) {
    *ptr = *ptr + x;
    *(ptr + 3) = *ptr - x;
}

int main() {
    int a[] = {1,2,3,4,5,6};
    fun(a + 2, 20);
    printf("%d\n", a[2] + a[5]);
    return 0;
}