#include <stdio.h>

int main() {
    union unit {
        int marks;
        int roll;
    } s1, s2;
    s2.roll = 23;
    s1.marks = 60;
    printf("%d..%d\n", s1.marks, s2.roll);
    return 0;
}

/*
    O/P
    60..23

    Simple assignment of values to both the instances of unit union members.
*/