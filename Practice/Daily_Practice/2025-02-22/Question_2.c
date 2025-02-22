#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,0,1,2,5}, *ptr;
    int x = 2 % 13 - (1 >> 1);
    ptr = arr + x;
    ptr += 3;
    printf("%d\n", ptr[1]);
    return 0;
}

/*
    O/P
    7
*/