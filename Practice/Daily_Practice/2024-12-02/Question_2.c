#include <stdio.h>
int main() {
    int i, j, x;
    scanf("%d", &x);
    i = 1;
    j = 1;
    while (i < 10) {
        j = j * i;
        i = i + 1;
        if (i == x)
            break;
    }
}

/*
    For the above program fragment, the variables i and j after execution must be 
    ((j = 9!) and (i = 10)) or (j = (x - 1)! and (i = x))
*/