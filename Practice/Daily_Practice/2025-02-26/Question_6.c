#include <stdio.h>

int counter2(int j) {
    static int count2 = 0;
    count2 = count2 + j;
    return count2;
}

int counter1(int i) {
    static int count1 = 0;
    count1 = count1 + i;
    count1 = counter2(count1);
    return count1;
}

int main() {
    int i, j;
    for (i = 0; i <= 5; i++)
        j = counter1(i);
    printf("%d\n", j);
    return 0;
}

/*
    O/P
    57
*/