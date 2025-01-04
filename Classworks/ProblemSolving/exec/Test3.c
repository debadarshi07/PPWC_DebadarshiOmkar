#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    execl("bin/ls", "Test3", "-a", "-s", NULL);
    execlp("/ls", "Test3", "-a", "-s", NULL);
    return 0;
}