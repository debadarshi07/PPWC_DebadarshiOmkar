#include <stdio.h>
#include <fcntl.h>

int main() {
    int fd, i;
    for (i = 0; i < 10; i++) {
        fd = open("read.c", O_RDONLY);
        if (fd % 2 == 0)
            printf("%d..\n", fd);
    }
    sleep(2);
    return 0;
}

/*

Analysis:
Same as above, but only even-numbered FDs are printed.

Answer:
FDs opened: 10
Output: Even-numbered FDs (4, 6, 8, ..., 12)

*/