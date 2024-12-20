#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {

	pid_t childpid;
	childpid = fork();

	if (childpid == -1) {
		perror("Failed to fork\n");
		return 1;
	}

//	if (childpid == 0) {
//		execl("/bin/mkdir", "mkdir", "test_folder", NULL);
//		perror("Child failed to exec ls\n");
//		return 1;
//	}

	if (childpid == 0) {
		execl("/home/student/Documents/2241015006_Debadarshi/PPWC/Classwork/Test26", "Test26", NULL);
		perror("Child failed to exec ls\n");
		return 1;
	}

	if (childpid != wait(NULL)) {
		perror("Parent failed to wait due to signal or error\n");
		return 1;
	}

	return 0;
}