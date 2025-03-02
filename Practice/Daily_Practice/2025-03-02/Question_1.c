#include <stdio.h>

void fx() {
    char a;
    if (a = getchar() != '\n')
        fx();
    if (a != '\n')
        putchar(a);
}

int main() {
    fx();
    return 0;
}

/*
    Assume that the input to the program from the command line is 1234 followed by a newline character. Which one of the following statements is correct ?
    a) The program will not terminate
    b) The program will terminate with no output
    c) The program will terminate with 4321 as output
    d) The program will terminate with 1234 as output

    Ans- c) The program will terminate with 4321 as output
*/