#include <stdio.h>
int main() {
    char message[6][30] = {"Koi bhi Lakshya", "Bada nahni", "Jeeta wahi", "Jo dara nahni", "hara wahi", "Jo lada nahni"};

    printf("%s\n", message + 3);
    printf("%c\n", *(*(message + 2) + 3));
    printf("%s\n", *(message + 4));

    return 0;
}

/*
    O/P
    Jo dara nahni
    t
    hara wahi
*/