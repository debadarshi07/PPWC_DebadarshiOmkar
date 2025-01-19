#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h> // For O_CREAT and O_EXCL
#include <sys/wait.h>

#define BUFFER_SIZE 5 // Size of the bounded buffer

int buffer[BUFFER_SIZE]; // Shared buffer
int in = 0;             // Producer index
int out = 0;            // Consumer index

// Semaphore names
#define SEM_EMPTY "/sem_empty"   // Tracks empty slots
#define SEM_FULL "/sem_full"     // Tracks filled slots
#define SEM_MUTEX "/sem_mutex"   // Ensures mutual exclusion

// Producer function
void producer(sem_t *sem_empty, sem_t *sem_full, sem_t *sem_mutex) {
    for (int i = 0; i < 10; i++) {
        sem_wait(sem_empty); // Wait for an empty slot
        sem_wait(sem_mutex); // Enter critical section

        // Produce an item
        int item = i + 1; // Simulate an item
        buffer[in] = item;
        printf("Producer produced: %d\n", item);
        in = (in + 1) % BUFFER_SIZE;

        sem_post(sem_mutex); // Exit critical section
        sem_post(sem_full);  // Signal a full slot

        sleep(1); // Simulate time taken to produce
    }
}

// Consumer function
void consumer(sem_t *sem_empty, sem_t *sem_full, sem_t *sem_mutex) {
    for (int i = 0; i < 10; i++) {
        sem_wait(sem_full);  // Wait for a full slot
        sem_wait(sem_mutex); // Enter critical section

        // Consume an item
        int item = buffer[out];
        printf("Consumer consumed: %d\n", item);
        out = (out + 1) % BUFFER_SIZE;

        sem_post(sem_mutex); // Exit critical section
        sem_post(sem_empty); // Signal an empty slot

        sleep(1); // Simulate time taken to consume
    }
}

int main() {
    sem_t *sem_empty, *sem_full, *sem_mutex;

    // Initialize named semaphores
    sem_empty = sem_open(SEM_EMPTY, O_CREAT | O_EXCL, 0666, BUFFER_SIZE); // Initially all slots are empty
    sem_full = sem_open(SEM_FULL, O_CREAT | O_EXCL, 0666, 0);             // Initially no slots are full
    sem_mutex = sem_open(SEM_MUTEX, O_CREAT | O_EXCL, 0666, 1);           // Mutex for critical section

    if (sem_empty == SEM_FAILED || sem_full == SEM_FAILED || sem_mutex == SEM_FAILED) {
        perror("sem_open failed");
        exit(EXIT_FAILURE);
    }

    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Consumer process
        consumer(sem_empty, sem_full, sem_mutex);
        exit(0);
    } else {
        // Producer process
        producer(sem_empty, sem_full, sem_mutex);

        // Wait for the consumer process to complete
        wait(NULL);

        // Cleanup semaphores
        sem_unlink(SEM_EMPTY);
        sem_unlink(SEM_FULL);
        sem_unlink(SEM_MUTEX);
    }

    return 0;
}