#include <stdio.h>

void convert_to_uppercase(char *string, int size) {
    for (int i = 0; i < size; i++) {
        if (*(string + i) >= 'a' && *(string + i) <= 'z') {
            *(string + i) = *(string + i) - 32;
        }
    }
}

int main() {
    char *argv[5];
    char str1[10], str2[10], str3[10], str4[10];

    argv[0] = str1;
    argv[1] = str2;
    argv[2] = str3;
    argv[3] = str4;
    argv[4] = NULL;

    for (int i = 0; i < 4; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(*(argv + i), 10, stdin);
    }

    for (int i = 0; i < 5; i++) {
        if (argv[i] != NULL) {
            convert_to_uppercase(argv[i], 10);
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%s \n", argv[i]);
    }
    return 0;
}