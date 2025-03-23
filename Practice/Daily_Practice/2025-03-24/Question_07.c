#include <stdio.h>

int bar(int n) {
    int r, e, b;
    if ((n >= -8) && (n <= +7)) {
        if (n < 0)
            n = 16 + n;
        b = 0;
        e = 1;
        while (n != 0) {
            r = n % 2;
            b = b + r * e;
            e = e * 10;
            n = n / 2;
        }
        return b;
    }
}

int main() {
    printf("%d", bar(-7));
}

/*
    O/P
    1001
*/