#include <stdio.h>
#include <string.h>

int main() {
    char p[20];
    char *s = "string";
    int length = strlen(s);
    for (int i = 0; i <= length; i++) {
        p[i] = s[length - i];
    }
    printf("%s", p);
}

/*
    O/P
    No output
*/