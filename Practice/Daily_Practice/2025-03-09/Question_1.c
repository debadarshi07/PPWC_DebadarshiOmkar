#include <stdio.h>

int main() {
    void *vp;
    char ch = 'g';
    int j = 20;
    char *p = "google";
    vp = &ch;
    printf("%c", *(char*)vp);
    vp = &j;
    printf("%d", *(int*)vp);
    vp = p;
    printf("%s", (char*)vp + 3);

    return 0;
}

/*
    O/P
    g20gle
*/