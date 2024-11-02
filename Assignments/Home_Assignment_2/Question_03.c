#include <stdio.h>

int simpleFunction(int Y[], int n, int x)
{
    int total = Y[0], loopIndex;
    for (loopIndex = 1; loopIndex <= n - 1; loopIndex++)
        total = x * total + Y[loopIndex];
    return total;
}

int main() {
    int z[] = {1,2,3,4,5,6,7,8,9,10};
    printf("The output of the function call with arguments z, 10, 2 will be: %d\n",simpleFunction(z, 10, 2) );
    return 0;
}

/*
    O/P
    simpleFunction(z, 10, 2) will be: 2036
*/