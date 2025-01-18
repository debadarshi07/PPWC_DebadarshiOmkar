#include <stdio.h>
#include <fcntl.h>

int main() {
    int fd, i;
    for (i = 0; i < 10; i++) {
        fd = open("read.c", O_RDONLY);
        if (fd == -1) {
            perror("Open error");
            return 1;
        }
        sleep(2);
        printf("FD Number=%d\n", fd);
    }
    return 0;
}

/*

Analysis:
Each call to open() creates a new FD.
Without closing, 10 FDs will be opened.

Answer:
FDs opened: 10
Output: FD numbers from 3 to 12

*/