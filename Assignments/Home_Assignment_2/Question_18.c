#include <stdio.h>

int main() {
    char p[20], str[] = "STRING";
    int l = 0;
    for (l = 0; str[l] != '\0'; l++);
    l = l - 1;
    for (int i = 0; i <= l; i++) {
        p[i] = str[l - i];
    }
    printf("%s", p);
    return 0;
}

/*
    O/P
    GNIRTSa (a is garbage value here)
*/