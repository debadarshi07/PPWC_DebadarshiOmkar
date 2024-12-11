#include <stdio.h>
#include <unistd.h>

int main() {
	printf("I am a process - %ld\n", (long)getpid());
	printf("My parent is - %ld\n", (long)getppid());
	sleep(500);
	return 0;
}