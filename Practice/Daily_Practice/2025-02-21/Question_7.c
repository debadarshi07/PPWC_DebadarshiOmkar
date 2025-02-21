#include <stdio.h>

int main() {
    char *s[4] = {"Bhopal", "Hyderabad", "Lucknow", "Jaipur"};
    char **ptr[4] = {s, s + 1, s + 2, s + 3};
    char ***p = ptr;

    return 0;
}