#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void modifyString(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            str[i] = toupper(ch);
        }
    }
}

int main() {
    char *inputString;
    int length;

    printf("Enter the length of the string: ");
    scanf("%d", &length);
    getchar();

    inputString = (char *)malloc((length + 1) * sizeof(char));
    if (inputString == NULL) {
        printf("Memory not available!\n");
        return 1;
    }

    printf("Enter the string: ");
    fgets(inputString, length + 1, stdin);
    
    int strLength = strlen(inputString);
    if (inputString[strLength - 1] == '\n') {
        inputString[strLength - 1] = '\0';
    }

    modifyString(inputString);
    printf("Modified string: %s\n", inputString);

    free(inputString);
    return 0;
}