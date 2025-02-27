#include <stdio.h>

void fun(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void gun(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sun(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;
    int *add_a = &a, *add_b = &b;

    printf("a: %d\nb: %d\n\n", a, b);
    printf("add_a: %u\nadd_b: %u\n\n", add_a, add_b);

    fun(a, b);
    printf("a: %d\nb: %d\n\n", a, b);
    printf("add_a: %u\nadd_b: %u\n\n", add_a, add_b);

    gun(add_a, add_b);
    printf("a: %d\nb: %d\n\n", a, b);
    printf("add_a: %u\nadd_b: %u\n\n", add_a, add_b);

    sun(&add_a, &add_b);
    printf("a: %d\nb: %d\n\n", a, b);
    printf("*add_a: %d\n*add_b: %d\n\n", *add_a, *add_b);
    printf("add_a: %u\nadd_b: %u\n\n", add_a, add_b);
}