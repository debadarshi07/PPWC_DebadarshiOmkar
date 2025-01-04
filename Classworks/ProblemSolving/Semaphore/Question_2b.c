#include <stdio.h>
#include <semaphore.h>
#include <fcntl.h>    /* For O_* constants */
#include <sys/stat.h> /* For mode constants */
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#define SEM_NAME_1 "/sem_1"
#define SEM_NAME_2 "/sem_2"

int main() {
    sem_t *sem1 = NULL, *sem2 = NULL;
    sem1 = sem_open(SEM_NAME_1, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR, 0);
    sem2 = sem_open(SEM_NAME_2, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR, 0);
    if (fork() == 0) {
        printf("ITER1\n");
        sem_post(sem1);
        sem_wait(sem2);
        printf("SUM3\n");
        sem_post(sem1);
        sem_close(sem1);
        sem_close(sem2);
    } else {
        sem_wait(sem1);
        printf("SOA2\n");
        sem_post(sem2);
        sem_wait(sem1);
        printf("CSE4\n");
        wait(NULL);
        sem_close(sem1);
        sem_close(sem2);

        sem_unlink(SEM_NAME_1);
        sem_unlink(SEM_NAME_2);
    }
    return 0;
}