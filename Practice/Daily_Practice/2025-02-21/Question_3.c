#include <stdio.h>

int main() {
    if (*"Hello" == *"Hai")
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}

/*
    O/P
    Same
*/