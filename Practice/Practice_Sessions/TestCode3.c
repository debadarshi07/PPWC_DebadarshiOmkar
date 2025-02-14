#include <stdio.h>
#define PI 3.14159
int main() {
    // char str[20];
    // printf("Enter name: ");
    // scanf("%s", str);
    // printf("Name is: %s", str);

    int a, b, c = 7;    // Only c is initialized and a, b are only declared not initialized.
    printf("a: %d, b: %d, c: %d\n\n", a, b, c);

    char ch1 = ' ';
    char ch2 = '\0';
    printf("Empty character: %d\n", ch1);
    printf("Null character: %d\n\n", ch2);

    // int num1, num2;
    // scanf("%2d %3d", &num1, &num2);
    /* num1 and num2 will receive maximum 2 and 3 digits until gets space respectively.
    For example,
     if i/p is 73727 then num1 = 73 and num2 = 727
     if i/p is 5 423478 then num1 = 5 and num2 = 423
     if i/p is 8574 988 then num1 = 85 and num2 = 74 */

    // printf("num1: %d, num2: %d\n\n", num1, num2);

    // float num1, num2;
    // scanf("%3f %4f", &num1, &num2);
    /* num1 will receive maximum 3 digits including point(2 digit + 1 point symbol) and num2 will receive maximum 4 digits including point. 
    For example, 
     if i/p is 4.9 3.54 then num1 = 4.900000 and num2 = 3.540000 
     if i/p is 5.84 93.5 then num1 = 5.800000 and num2 = 4.000000 
     if i/p is 4 8.532 then num1 = 4.000000 and num2 = 8.530000 */

    // printf("num1: %f, num2: %f\n\n", num1, num2);

    int x, y, z;
    int sum = (x = 5, y = 3, z = 8, x + y + z);
    printf("sum: %d\n\n", sum);
    return 0;
}