#include <stdio.h>
int main() {
    int arr[4][5];
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++)
            arr[i][j] = 10 * i + j;
    }
    printf("%d %d\n", arr[2][4], arr[1][2]);
    printf("%d %d", arr[3][3], arr[2][3]);
    return 0;
}

/*
    O/P
    24 12
    33 23
*/