#include <stdio.h>
int main() {
    int index;
    for (index = 1; index <= 5; index++) {
        printf("%d", index);
        if (index == 3)
            continue;
    }
}

/*
    O/P
    12345
*/