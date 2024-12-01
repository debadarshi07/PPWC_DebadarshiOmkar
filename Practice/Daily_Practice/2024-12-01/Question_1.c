#include <stdio.h>
int main() {
    int n = 3;
    int a[10] = {0};
    a[++n] = n++;
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
}

/*
    assigns 4 to a[5]
    (what is assigned is compiler dependent)
*/