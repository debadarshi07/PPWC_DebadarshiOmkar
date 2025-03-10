#include <stdio.h>
#include <string.h>

union data {
    int i;
    char str[20];
    float f;
};
int main() {
    union data d;
    d.i = 20;
    d.f = 300.5;
    strcpy(d.str, "Debadarshi");
    printf("%d\n", d.i);
    printf("%f\n", d.f);
    printf("%s\n", d.str);
}

/*
    O/P
    Garbage value
    Garbage value
    Debadarshi
*/