#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

	pid_t childpid;
	childpid = fork();

	if (childpid == -1) {
		perror("Failed to fork.");
		return 1;
	}

	if (childpid == 0) {
		printf("I am child: %ld\n", (long)getpid());
		printf("My parent is: %ld\n", (long)getppid());
	} else {
		printf("I am parent: %ld\n", (long)getpid());
	}

	return 0;
}