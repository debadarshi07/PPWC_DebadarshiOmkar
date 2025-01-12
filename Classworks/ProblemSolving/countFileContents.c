#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#define MAX_SIZE 1000

void count_words(char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file.\n");
        return -1;
    }
  
    char buffer[MAX_SIZE];
    int count = 0;
    while (fgets(buffer, MAX_SIZE, file) != NULL) {
        for (int i = 0; i < strlen(buffer); i++) {
            if (buffer[i] == ' ' || buffer[i] == '.' || buffer[i] == '\n' || buffer[i] == '\t') {
                count++;
            }
        }
    }

    fclose(file);
    printf("The number of words present in the given file are: %d\n", count);
}

void count_characters(char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file.\n");
        return -1;
    }

    char buffer[MAX_SIZE];
    int count = 0;
    while (fgets(buffer, MAX_SIZE, file) != NULL) {
        count += strlen(buffer);
    }

    fclose(file);
    printf("The number of characters present in the given file are: %d\n", count);
}

void count_lines(char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file.\n");
        return -1;
    }

    char buffer[MAX_SIZE];
    int count = 0;
    while (fgets(buffer, MAX_SIZE, file) != NULL) {
        count++;
    }

    fclose(file);
    printf("The number of lines present in the given file are: %d\n", count);
}

int main() {
    pid_t pid1, pid2, pid3;

    pid1 = fork();
    if (pid1 == -1) {
        perror("Fork failed\n");
        exit(1);
    }
    if (pid1 == 0) {
        printf("Child Process1 ID: %d\n", getpid());
        count_words("file.txt");
        exit(0);
    }

    pid2 = fork();
    if (pid2 == -1) {
        perror("Fork failed\n");
        exit(1);
    }
    if (pid2 == 0) {
        printf("Child Process1 ID: %d\n", getpid());
        count_characters("file.txt");
        exit(0);
    }

    pid3 = fork();
    if (pid3 == -1) {
        perror("Fork failed\n");
        exit(1);
    }
    if (pid3 == 0) {
        printf("Child Process1 ID: %d\n", getpid());
        count_lines("file.txt");
        exit(0);
    }

    wait(NULL);
    wait(NULL);
    wait(NULL);

    return 0;
}