#include <stdio.h>

int main() {
    int a[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    printf("\nINDEX\t\tADDRESS\t\tVALUE\n\n");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d\t\t%d\t\t%d\n", i, a + i, *(a + i));
    }
    return 0;
}