#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int string_length_recursively(char *str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + string_length_recursively(str + 1);
}

int main() {
    char *str = (char*)malloc(20 * sizeof(char));
    printf("Enter string: ");
    fgets(str, 20, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("The length of %s is %d.\n", str, string_length(str));
    printf("The length of %s is %d.\n", str, string_length_recursively(str));

    free(str);
    return 0;
}