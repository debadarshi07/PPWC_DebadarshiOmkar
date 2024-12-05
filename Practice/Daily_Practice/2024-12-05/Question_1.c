#include <stdio.h>
int simpleFunction(int Y[], int n, int x) {
    int total = Y[0], loopindex;
    for (loopindex = 1; loopindex <= n - 1; loopindex++) {
        total = x * total + Y[loopindex];
    }
    return total;
}

int main() {
    int Z[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int result = simpleFunction(Z, 10, 2);
    printf("%d", result);
    return 0;
}

/*
    O/P
    1023
*/