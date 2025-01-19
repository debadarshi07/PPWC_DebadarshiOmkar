#include <stdio.h>

char findFirstRepetitive(char word[], int size);
char findFirstRepetitive(char word[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (word[i] == word[j]) {
                return word[i];
            }
        }
    }
    return '\0';
}

char findFirstRepetitive2(char word[], int size) {
    int collect[size];
    int i, j, index = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < index; j++) {
            if (word[i] == collect[j]) {
                return word[i];
            }
        }
        collect[index++] = word[i];
    }
    return '\0';
}

int main() {
    char word[] = "racaecar";
    int size = sizeof(word) / sizeof(word[0]) - 1;

    char repetitive = findFirstRepetitive(word, size);
    if (repetitive != '\0') {
        printf("First repetitive character in %s is: %c", word, repetitive);
    } else {
        printf("No repetitive character in %s.", word);
    }

    printf("\n");

    char repetitive2 = findFirstRepetitive2(word, size);
    if (repetitive2 != '\0') {
        printf("First repetitive character in %s is: %c", word, repetitive2);
    } else {
        printf("No repetitive character in %s.", word);
    }

    return 0;
}