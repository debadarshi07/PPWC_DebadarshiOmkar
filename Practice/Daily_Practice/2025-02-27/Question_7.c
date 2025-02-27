#include <stdio.h>
struct Ournode {
    int x, y, z;
};

int main() {
    struct Ournode p = {10, 20, 30};
    printf("%d\n", p);
    // printf("%d\n", p + 1);   Error
    // printf("%c", *p);    Error

    printf("%u\n", &p);
    printf("%u\n\n", &p + 1);

    printf("%u\n", (int *)&p);
    printf("%u\n", (int *)&p + 1);
}