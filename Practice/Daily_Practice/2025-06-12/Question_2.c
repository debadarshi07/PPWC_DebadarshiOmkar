#include <stdio.h>

int main() {
    int a = 10;
    switch ('aa') {
        case 5: printf("5"); break;
        case 97+97: printf("97"); break;
        default : printf("Default case");
    }
    return 0;
}

/*
    O/P
    Default case
*/