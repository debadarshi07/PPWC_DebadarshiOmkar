#include <stdio.h>
int main() {
    char ch = 97;
    printf("%d", sizeof(ch + 4));
}

// Output will be 4 because ch = 97 is 'a' and adding 4 to it will give us 'e' and the size of 'e' is 4 as it's considered an int type