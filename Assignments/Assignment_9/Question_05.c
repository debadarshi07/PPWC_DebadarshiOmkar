#include <stdio.h>
#include <fcntl.h>
#define BLKSIZE 8
int main(void) {
    char buf[BLKSIZE];
    read(STDIN_FILENO, buf, BLKSIZE);
    write(STDOUT_FILENO, buf, BLKSIZE);
    return 0;
}

/*

Analysis:
Reads up to 8 bytes and echoes the same bytes.
Input	Output
STUDENT\n (8 bytes)	STUDENT\n
STUDENTS\n (9 bytes)	STUDENTS
STUDENTSpwd\n (> 8 bytes)	STUDENT
STUDENTSpwd;who\n (> 8 bytes)	STUDENT

*/