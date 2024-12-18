#include <stdio.h>
#include <unistd.h>

int main() {
	pid_t childpid = 0;
	int i;
	for (i = 1; i < 5; i++){
		if ((childpid = fork()) <= -1){
			break;
		}
	}
	fprintf(stderr, "i: %d process ID: %ld parent ID: %ld child ID: %ld\n", i, (long)getpid(), (long)getppid(), (long)childpid);

	return 0;
}
