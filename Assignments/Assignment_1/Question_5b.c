#include <stdio.h>
int main() {
    int x = -123;
    printf("%X", x);
    return (0);
}

// %u is unsigned integer, hence it will return the 32bit 2's complement of -123 in hexadecimal format