#include <stdio.h>

int main() {
    int a[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900};

    int *p1 = a;
    char *p2 = (char*)a;
    float *p3 = (float*)a;
    void *p4 = a;

    printf("p1: %u\n", p1);
    printf("p2: %u\n", p2);
    printf("p3: %u\n", p3);
    printf("p4: %u\n\n", p4);

    printf("*p1: %d\n", *p1);
    printf("*p2: %d\n", *p2);
    printf("*p3: %d\n\n", *p3);
    // printf("p4: %d\n", *p4);

    printf("p1 + 1: %u\n", p1 + 1);
    printf("p2 + 1: %u\n", p2 + 1);
    printf("p3 + 1: %u\n", p3 + 1);
    printf("p4 + 1: %u\n\n", p4 + 1);

    printf("p1 + 1: %d\n", *(p1 + 1));
    printf("p2 + 1: %d\n", *(p2 + 1));
    printf("p3 + 1: %d\n\n", *(p3 + 1));
    // printf("p4 + 1: %u\n\n", *(p4 + 1));

    return 0;
}