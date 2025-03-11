#include <stdio.h>

int Count(int x, int y) {
    static int counter;
    if (y != 1) {
        if (x != 1) {
            // printf("*");
            counter++;
            Count(x / 2, y);
        } else {
            y = y - 1;
            Count(1024, y);
        }
    }

    return counter;
}

int main() {
    int result = Count(1024, 1024);
    printf("%d\n", result);

    return 0;
}

/*
    O/P
    10230
*/