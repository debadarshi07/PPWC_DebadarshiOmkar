#include <stdio.h>
int count1(int n) {
    static int x = 10;
    return x + n;
}

int count(int n) {
    static int d = 1;
    d++;
    if(n > 1)
        count(n - 1);
    d++;
    return count1(d);
}

int main() {
    printf("%d", count(3) + count(4));
    return 0;
}

/*
    O/P
    42
*/