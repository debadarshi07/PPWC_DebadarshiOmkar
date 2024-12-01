#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strcpy2(char *dest_string, const char *source_string) {
    for (int i = 0; i <= strlen(source_string); i++) {
        dest_string[i] = source_string[i];
    }
}

int main() {
    char str[8] = "String1"; 
    char dest[8];   
    strcpy2(dest, str);
    printf("%s\n", dest); 

    return 0;
}