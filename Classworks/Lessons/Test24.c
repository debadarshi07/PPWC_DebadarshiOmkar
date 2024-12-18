#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void) {
	pid_t childpid;
	childpid = for();
	if (childpid == 0) {
		printf("Inside child\n");
		printf("My process ID: %ld\n", (long)getpid());
	} else {
		wait(NULL);
		printf("In parent\n");
		printf("My process ID: %ld\n", (long)getpid());
	}
}
