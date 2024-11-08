#include <stdio.h>
#define N 50

int fun(int X[], int Y[], int Z[], int n);
int main() {
    int X[N], Y[N], Z[N], n = 6, s, i;
    s = fun(X, Y, Z, n);
    for (i = 0; i <= n; i++)
        printf("%d ", X[i]);
    printf("\n");
    for (i = 0; i <= n; i++)
        printf("%d ", Y[i]);
    printf("\n");
    for (i = 0; i <= n; i++)
        printf("%d ", Z[i]);
    printf("\n");
    printf("Last column sum=%d", s);
    return 0;
}
int fun(int X[], int Y[], int Z[], int n) {
    int i;
    X[0] = Y[0] = Z[0] = 0;
    X[1] = 1;
    Y[1] = 2;
    Z[1] = 3;
    for (i = 2; i <= n; i++) {
        X[i] = Y[i - 1] + Z[i - 2];
        Y[i] = 2 * X[i];
        Z[i] = 3 * Y[i];
    }
    return (Y[n] + Z[n] + X[n]);
}

/*
    O/P
    0 1 2 7 26 94 344
    0 2 4 14 52 188 688
    0 3 12 42 156 564 2064
    Last column sum=3096
*/