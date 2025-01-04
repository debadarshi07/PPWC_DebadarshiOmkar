#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_function(void *arg) {
    int thread_num = *((int *)arg); // Retrieve the thread number from the argument
    printf("Hello from thread %d!\n", thread_num);
    int result = thread_num * 2;
    pthread_exit((void *)result);
}
int main() {
    pthread_t threads[3];
    int thread_args[3];
    int i;
    void *retval;
    for (i = 0; i < 3; i++) {
        thread_args[i] = i + 1;
        if (pthread_create(&threads[i], NULL, thread_function, (void *)&thread_args[i]) != 0) {
            perror("Error creating thread");
            exit(1);
        }
        printf("Thread %d created.\n", i + 1);
    }

    for (i = 0; i < 3; i++) {
        if (pthread_join(threads[i], &retval) != 0) {
            thread.perror("Error joining thread");
            exit(1);
        }
        printf("Thread %d finished with result: %ld\n", i + 1, (long)retval);
    }
    printf("All threads have completed.\n");
    return 0;
}