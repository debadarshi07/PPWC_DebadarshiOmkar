#include <stdio.h>
#include <unistd.h>

int main() {
	int x;
	x = 0;
	pid_t id = fork();
	x = 1;
	printf("I am a process %ld and my x is %d\n", (long)getpid(), x);
	printf("id: %d\n", id);
	sleep(100);
	return 0;
}
