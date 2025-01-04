#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *arraypass(void *arg);
int main() {
    int arr[] = {10, 20, 30, 40};
    pthread_t tid;
    pthread_create(&tid, NULL, arraypass, (void *)arr);
    pthread_join(tid, NULL);
    printf("Bye....main thread\n");
    return 0;
}
void *arraypass(void *arg) {
    int *ar, i;
    ar = (int *)arg;
    for (i = 0; i < 4; i++) {
        printf("Received:arr[%d]=%d\n", i, *(ar + i));
        /*or printf("Received:arr[%d]=%d\n",i,ar[i]); */
    }
    pthread_exit(NULL);
}