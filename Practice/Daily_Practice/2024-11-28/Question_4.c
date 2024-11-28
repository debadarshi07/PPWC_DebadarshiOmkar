#include <stdio.h>
int main() {
    int j, n;
    j = 1;
    while (j <= n)
        j = j * 2;

    return 0;
}

/*
    The number of comparisions in the execution of the loop for any n > 0 is: log(n) + 1
*/