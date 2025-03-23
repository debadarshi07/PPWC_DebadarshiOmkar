#include <stdio.h>

int main() {
    int a;
    for (a = 0; a < 7; a++) {
        switch(a) {
            default:
                a = 4;
                break;
            case 6:
                a--;
                break;
            case 5:
                a = a + 1;
                break;
            case 1:
                a = a - 1;
                break;
        }
    }

    printf("%d\n", a);
    return 0;
}

/*
    O/P
    7
*/