#include <stdio.h>
void inc() {
    static int x;
    printf("%d", ++x);
}
int main() {
    inc();
    inc();
    inc();
}

/*
    O/P
    123

    This is because the default value of static variable is always 0.
*/