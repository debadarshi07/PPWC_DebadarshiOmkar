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

    // This always assigns the later most value to the variable.
    int n = (10, 20);
    printf("n: %d\n\n", n);

    // We need to find the rightmost question mark and that should be matched with the very next colon.
    // Evaluation starts from 5 > 4, then if it's true then only the expression 6 > 7 will be calculated.
    // Personal trick: Try to find consecutive ? or : (then group from that position to both the sides)
    int ans = 5 > 4 ? 6 > 7 ? 10 : 20 : 30;
    printf("ans: %d\n\n", ans);

    // Shortcircuit code: Once the first ternary expression is found false it doesn't execute the truth portion.
    int h = 8, k = 9;
    int ans1 = 5 < 4 ? 6 > 7 ? ++h : 20 : 30;
    int ans2 = 5 < 4 ? (6 > 7 ? ++h : 20) : 30;

    int ans3 = 5 > 4 ? 6 > 7 ? 10 : 20 : ++k;
    int ans4 = 5 > 4 ? (6 > 7 ? 10 : 20) : ++k;

    printf("h: %d, ans1: %d\n", h, ans1);
    printf("h: %d, ans2: %d\n", h, ans2);
    printf("k: %d, ans3: %d\n", k, ans3);
    printf("k: %d, ans4: %d\n\n", k, ans4);

    int n1 = 30, n2 = 10, n3 = 40, n4 = 20;

    int max1 = n1 > n2 ? n1 > n3 ? n1 : n3 : n2 > n3 ? n2 : n3;
    int max2 = n1 > n2 && n1 > n3 ? n1 : n2 > n3 ? n2 : n3;
    printf("max1: %d\n", max1);
    printf("max2: %d\n\n", max2);

    int min1 = n1 < n2 ? n1 < n3 ? n1 < n4 ? n1 : n4 : n3 < n4 ? n3 : n4 : n2 < n3 ? n2 < n4 ? n2 : n4 : n3 < n4 ? n3 : n4;
    int min2 = n1 < n2 && n1 < n3 && n1 < n4 ? n1 : n2 < n3 && n2 < n4 ? n2 : n3 < n4 ? n3 : n4;

    printf("min1: %d\n", min1);
    printf("min2: %d\n\n", min2);

    // This is considered as bad programming. O/P changes from compiler to compiler.
    int s = 5;
    printf("%d %d %d\n\n", ++x, ++x, ++x);
    return 0;
}