#include <stdio.h>

int main() {
    int a[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    printf("\nINDEX\t\tADDRESS\t\tVALUE\n\n");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d\t\t%d\t\t%d\n", i, a + i, *(a + i));
    }
    return 0;
}

/*
    The address changes by 4 from one index to the next one as every index has stored an integer value which takes 4 bytes in memory.
*/