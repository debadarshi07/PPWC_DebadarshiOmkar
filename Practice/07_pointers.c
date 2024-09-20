#include <stdio.h>

int main () {
    int i = 45;
    int* j = &i;
    printf("%p\n", j);
    return 0;
}