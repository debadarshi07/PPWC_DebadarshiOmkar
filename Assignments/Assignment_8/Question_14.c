#include <stdio.h>
#include <unistd.h>

void show() {
	if (fork() == 0)
		printf("1\n");
	if (fork() == 0)
		printf("2\n");
	if (fork() == 0)
		printf("3\n");
}

int main(void) {
	show();
	return 0;
}

/*
	O/P
	1
	2
	2
	3
	3
	3
	3

	Total number of processes: 4
*/