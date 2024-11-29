#include <stdio.h>
int main() {
    for (int k = 0; k < 20; k = k + 2) {
        if (k % 3 == 1)
            printf("%d ", k);
    }
}

/*
    O/P
    4 10 16
*/