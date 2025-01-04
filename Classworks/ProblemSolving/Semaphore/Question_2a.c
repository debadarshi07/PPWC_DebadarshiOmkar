/*
Create a C program using named semaphores to display messages in a specific sequence with two processes (parent and child). The parent prints ITER and SUM, while the child prints SOA and CSE independently. Set the initial values of semaphore1 and semaphore2 to 0. Output sequence: ITER SOA SUM CSE
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <semaphore.h>

int main() {
    pid_t pid;
    sem_t *semaphore1, *semaphore2;
    // Create and initialize named semaphores
    semaphore1 = sem_open("/semaphore1", O_CREAT, 0644, 0);
    semaphore2 = sem_open("/semaphore2", O_CREAT, 0644, 0);
    pid = fork();
    if (pid == 0) {
        sem_wait(semaphore1); // Wait until semaphore1 is signaled
        printf("SOA\n");
        sem_post(semaphore2); // Signal semaphore2 for parent to print SUM
        sem_wait(semaphore1); // Wait again for semaphore1 to be signaled
        printf("CSE\n");
        sem_post(semaphore2); // Signal semaphore2 to indicate completion
    } else {
        printf("ITER\n");
        sem_post(semaphore1); // Signal semaphore1 for child to print SOA
        sem_wait(semaphore2); // Wait until semaphore2 is signaled by the child
        printf("SUM\n");
        sem_post(semaphore1); // Signal semaphore1 for child to print CSE
        sem_wait(semaphore2); // Wait for the child to finish CSE
    }
    // Cleanup named semaphores
    sem_close(semaphore1);
    sem_close(semaphore2);
    sem_unlink("/semaphore1");
    sem_unlink("/semaphore2");
    return 0;
}