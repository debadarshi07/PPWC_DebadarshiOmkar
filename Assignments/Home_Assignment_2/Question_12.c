#include <stdio.h>

int MyX(int *E, unsigned int size) {
    int Y = 0;
    int Z;
    int i, j, k;
    for (i = 0; i < size; i++)
        Y = Y + E[i];
    for (i = 0; i < size; i++)
        for (j = i; j < size; j++) {
            Z = 0;
            for (k = i; k <= j; k++)
                Z = Z + E[k];
            if (Z > Y)
                Y = Z;
        }
    return Y;
}

int main() {
    int E[5] = {-5, 2, 3, -7, 4};
    int result = MyX(E, 5);
    printf("%d\n", result);
}

/*
    O/P
    (a) maximum possible sum of elements in any sub-array of array E.
    The function is using 3 three loops where the two outer loops are tracking the indices from where to where we will sum the elements and the innermost loop is performing the addition in that range. Then the comparision with older sum value and updation is taking place accordingly.
*/