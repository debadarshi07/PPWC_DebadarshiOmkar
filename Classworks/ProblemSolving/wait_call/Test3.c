#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	int status;
	pid_t id = fork();
	if (id == 0) {
		printf("I am child and my pid is :%d\n", getpid());
		sleep(5);
		exit(0);
	}
	printf("Before wait call \n");
	pid_t waitr = wait(&status);
	printf("Parent executed wait and wait returned: %d\n", waitr);
	printf("Status=%d\n", status);

	return 0;
}