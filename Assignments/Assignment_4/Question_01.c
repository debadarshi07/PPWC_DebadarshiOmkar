#include <stdio.h>

int main() {
    int Ia = 345;
    float Fb = 4.5;
    char Chvar = 'Z';

    int *IaAdd = &Ia;
    float *FbAdd = &Fb;
    char *ChvarAdd = &Chvar;

    printf("Value\t\tAddress\n------------------------\n");
    printf("%d\t\t%p\n%.2f\t\t%p\n%c\t\t%p\n", Ia, (void*)IaAdd, Fb, (void*)FbAdd, Chvar, (void*)ChvarAdd);
    // (void*) before every pointer is optional. This is only used to make the code more portable for all the browsers to avoid warnings while printing pointers with %p.

    return 0;
}