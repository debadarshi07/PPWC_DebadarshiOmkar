#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	pid_t cpid;
	int fd, fd1;
	char buf[20];

	if (argc != 2) {
		fprintf(stderr, "Usage: %s pipename\n", argv[0]);
		return 1;
	}

	mkfifo(argv[1], 0600); /* Create a nmaed pipe*/

	cpid = fork();

	if (cpid == 0) {
		fd = open(argv[1], O_WRONLY);
		write(fd, "I am child\n", 11);
	}
	else {
		fd1 = open(argv[1], O_RDONLY);
		read(fd1, buf, 11);
		write(1, buf, 11);
		wait(NULL);
		unlink(argv[1]);
	}

	return 0;
}