#include <stdio.h>

int main(int argc, char* argv[]) {
    char a = 'R', b = 'j';
    char c = (++a | b) - '-';
    char d = (c-- & b) + '*';
    char e = (d ^ c);
    char f = (~e - d);
    printf("%c%c%c%c", c, d, e, f);
    return 0;
}

/*
    O/P
    Mt9R
*/