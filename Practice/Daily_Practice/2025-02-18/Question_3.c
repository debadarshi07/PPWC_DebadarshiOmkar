#include <stdio.h>
int main() {
    int a = 5;
    printf("%u\n", &a);
    printf("%u", &a + 5);
}