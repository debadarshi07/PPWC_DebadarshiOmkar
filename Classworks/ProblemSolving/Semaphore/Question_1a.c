/*
Process ordering using semaphore. Create 6 number of processes ( 1 parent + 5 children) using fork() in if-else if-else ladder. The parent process will be waiting for the termination of all it’s children and each process will display a line of text on the standard error as;
P1: Coronavirus
P2: WHO:
P3: COVID-19
P4: disease
P5: pandemic
Your program must display the message in the given order :
WHO: Coronavirus disease COVID-19 pandemic.
*/

#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <semaphore.h>
#include <unistd.h>

int main() {
    int ret, sval;
    sem_t *sem;
    sem = sem_open("/sem1", O_RDWR);
    if (sem == SEM_FAILED) {
        perror("sem_open fail;");
        return -1;
    }
    else {
        printf("\n sem_open success\n");
    }
    sem_getvalue(sem, &sval);
    printf("\n semaphore val = (%d)\n", sval);
    ret = sem_wait(sem); // wait state
    printf("\nProcess 2 executing critical section\n");
    sleep(10);
    printf("\n ret is (%d)\n", ret);
    printf("\nprocess 2:\n");
    sem_post(sem);
    printf("\nProcess 2 executed critical section\n");
    // sem_unlink("/sem1");
}