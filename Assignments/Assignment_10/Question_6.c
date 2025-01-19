#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h> // For O_CREAT and O_EXCL
#include <sys/wait.h>

int main() {
    // Named semaphores
    sem_t *sem_P1, *sem_P2, *sem_P3, *sem_P4, *sem_P5;

    // Initialize named semaphores
    sem_P1 = sem_open("/sem_P1", O_CREAT | O_EXCL, 0666, 0); // Block P1 initially
    sem_P2 = sem_open("/sem_P2", O_CREAT | O_EXCL, 0666, 1); // Start with P2
    sem_P3 = sem_open("/sem_P3", O_CREAT | O_EXCL, 0666, 0); // Block P3 initially
    sem_P4 = sem_open("/sem_P4", O_CREAT | O_EXCL, 0666, 0); // Block P4 initially
    sem_P5 = sem_open("/sem_P5", O_CREAT | O_EXCL, 0666, 0); // Block P5 initially

    if (sem_P1 == SEM_FAILED || sem_P2 == SEM_FAILED || sem_P3 == SEM_FAILED || 
        sem_P4 == SEM_FAILED || sem_P5 == SEM_FAILED) {
        perror("sem_open failed");
        exit(EXIT_FAILURE);
    }

    // Create 5 child processes
    pid_t pid;
    for (int i = 1; i <= 5; i++) {
        pid = fork();
        if (pid < 0) {
            perror("fork failed");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child processes
            if (i == 1) {
                sem_wait(sem_P1); // Wait for P1
                fprintf(stderr, "Coronavirus ");
                sem_post(sem_P4); // Signal P4
            } else if (i == 2) {
                sem_wait(sem_P2); // Wait for P2
                fprintf(stderr, "WHO: ");
                sem_post(sem_P1); // Signal P1
            } else if (i == 3) {
                sem_wait(sem_P3); // Wait for P3
                fprintf(stderr, "COVID-19 ");
                sem_post(sem_P5); // Signal P5
            } else if (i == 4) {
                sem_wait(sem_P4); // Wait for P4
                fprintf(stderr, "disease ");
                sem_post(sem_P3); // Signal P3
            } else if (i == 5) {
                sem_wait(sem_P5); // Wait for P5
                fprintf(stderr, "pandemic ");
            }
            exit(0);
        }
    }

    // Parent process waits for all children
    for (int i = 0; i < 5; i++) {
        wait(NULL);
    }

    // Cleanup semaphores
    sem_unlink("/sem_P1");
    sem_unlink("/sem_P2");
    sem_unlink("/sem_P3");
    sem_unlink("/sem_P4");
    sem_unlink("/sem_P5");

    return 0;
}