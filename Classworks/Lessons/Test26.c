#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
	int num1 = 5, num2 = 66;
	printf("Sum is %d\n", num1 + num2);
	return 0;

/*
	
	ps -le | grep CMD
	ls -l > pipetest
	sort -n < pipetest
	ls -l | sort -n

*/
}