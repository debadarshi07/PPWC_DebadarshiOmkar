#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
	printf("\nI am main process pid = (%d)\n",getpid());
	execl("./np1", "np1", "arg1", "arg2", "arg3", NULL); //Replaces the current process image with a new process image specified by the given file path ("./np")
	printf("This line will not be printed...");

	return 0;
}