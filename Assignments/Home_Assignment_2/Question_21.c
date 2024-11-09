#include <stdio.h>

int main() {
    int rows = 3, cols = 4;
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i = 80, j = 90, k = 99;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (a[i][j] < k)
                k = a[i][j];
    printf("%d", k);
    return 0;
}

/*
    O/P
    1 2 3 4
    5 6 7 8
    9 10 11 12
    1 (value of k)
*/