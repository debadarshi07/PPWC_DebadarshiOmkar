#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h> // For O_CREAT and O_EXCL

int main() {
    // Define named semaphores
    sem_t *sem_X, *sem_Y1, *sem_Z, *sem_Y2;

    // Initialize named semaphores
    sem_X = sem_open("/sem_X", O_CREAT | O_EXCL, 0666, 1);   // Start with 'X' allowed
    sem_Y1 = sem_open("/sem_Y1", O_CREAT | O_EXCL, 0666, 0); // Block 'Y1' initially
    sem_Z = sem_open("/sem_Z", O_CREAT | O_EXCL, 0666, 0);   // Block 'Z' initially
    sem_Y2 = sem_open("/sem_Y2", O_CREAT | O_EXCL, 0666, 0); // Block 'Y2' initially

    if (sem_X == SEM_FAILED || sem_Y1 == SEM_FAILED || sem_Z == SEM_FAILED || sem_Y2 == SEM_FAILED) {
        perror("sem_open failed");
        exit(EXIT_FAILURE);
    }

    // Create child processes
    pid_t pid_X, pid_Y, pid_Z;

    // Process for 'X'
    if ((pid_X = fork()) == 0) {
        for (int i = 0; i < 4; i++) { // Repeat 4 times
            sem_wait(sem_X);          // Wait for 'X'
            printf("X");
            printf("X");
            fflush(stdout);           // Ensure immediate output
            sem_post(sem_Y1);         // Signal 'Y1'
        }
        exit(0);
    }

    // Process for 'Y' (handles both 'Y1' and 'Y2')
    if ((pid_Y = fork()) == 0) {
        for (int i = 0; i < 4; i++) {
            sem_wait(sem_Y1);         // Wait for 'Y1'
            printf("Y");
            fflush(stdout);           // Ensure immediate output
            sem_post(sem_Z);          // Signal 'Z'

            sem_wait(sem_Y2);         // Wait for 'Y2'
            printf("Y");
            fflush(stdout);           // Ensure immediate output
            sem_post(sem_X);          // Signal 'X'
        }
        exit(0);
    }

    // Process for 'Z'
    if ((pid_Z = fork()) == 0) {
        for (int i = 0; i < 4; i++) {
            sem_wait(sem_Z);          // Wait for 'Z'
            printf("Z");
            printf("Z");
            fflush(stdout);           // Ensure immediate output
            sem_post(sem_Y2);         // Signal 'Y2'
        }
        exit(0);
    }

    // Wait for child processes to complete
    wait(NULL);
    wait(NULL);
    wait(NULL);

    // Cleanup semaphores
    sem_unlink("/sem_X");
    sem_unlink("/sem_Y1");
    sem_unlink("/sem_Z");
    sem_unlink("/sem_Y2");

    return 0;
}