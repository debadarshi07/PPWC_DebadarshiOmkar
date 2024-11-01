#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_string(char *destination, char *source) {
    int index = 0;
    while (source[index] != '\0') {
        destination[index] = source[index];
        index++;
    }
    destination[index] = '\0';
}

void copy_string_recursively(char *destination, char *source) {
    if (*source == '\0') {
        *destination = '\0';
    } else {
        *destination = *source;
        copy_string_recursively(destination + 1, source + 1);
    }
}


int main() {
    char *source;
    int size;
    printf("Enter the size of the string: ");
    scanf("%d", &size);
    getchar();

    source = (char*)malloc(size + 1);
    if (source == NULL) {
        printf("Memory allocation failed.");
        return 0;
    }

    printf("Enter a string: ");
    fgets(source, size + 1, stdin);
    source[strcspn(source, "\n")] = '\0';
    printf("Given string input: %s\n", source);

    char *destination1 = (char*)malloc(size + 1);
    if (destination1 == NULL) {
        printf("Memory allocation failed.");
        return 0;
    }
    copy_string(destination1, source);
    printf("Destination string after copying: %s\n", destination1);

    char *destination2;
    destination2 = (char*)malloc(size + 1);
    if (destination2 == NULL) {
        printf("Memory allocation failed.");
        return 0;
    }
    copy_string_recursively(destination2, source);
    printf("Destination string after copying: %s\n", destination2);

    free(source);
    free(destination1);
    free(destination2);
    return 0;
}