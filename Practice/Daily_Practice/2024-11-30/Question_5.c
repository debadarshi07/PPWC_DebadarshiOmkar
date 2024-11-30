#include <stdio.h>
int main() {
    int i = 6720, j = 4;
    while (i % j == 0) {
        i = i / j;
        j = j + 1;
    }
}

/*
    On termination j will have the value 9.
*/