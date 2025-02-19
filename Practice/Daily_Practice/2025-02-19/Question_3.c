#include <stdio.h>
int main() {
    int *i, b[] = {2,3,4,5,6};
    i = b;
    *++i;
    printf("%d\t", *i);
    i = i + 3;
    printf("%d\t", *i);
    return 0;
}