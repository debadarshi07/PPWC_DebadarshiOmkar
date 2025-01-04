#include <stdio.h>
#include <pthread.h>

void *stringpass(void *arg);
int main() {
    char *msg = "ITER";
    pthread_t t;
    pthread_create(&t, NULL, passint, (void *)msg);
    pthread_join(t, NULL);
    return 0;
}
void *stringpass(void *arg) {
    char *str;
    str = (char *)(arg);
    printf("String received=%s\n", str);
    pthread_exit(NULL);
}