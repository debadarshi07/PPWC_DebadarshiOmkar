#include <stdio.h>
int main() {
    char p[20];
    char str[] = "STRING";
    int l = 0;
    for (l = 0; str[l] != '\0'; l++);
    for (int i = 0; i <= l; i++) {
        p[i] = str[l - i];
    }
    printf("%s", p);
    return 0;
}

/*
    O/P
    It'll print nothing because the first index of p[] is getting a null point character '\0' as the 6th index of str[] is '\0'. Hence, p[] is terminated from the first index itself.
*/