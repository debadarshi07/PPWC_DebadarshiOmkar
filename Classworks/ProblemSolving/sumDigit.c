#include <stdio.h>

int main() {
    float num;
    int sum = 0;
    printf("Enter a number: \n");
    scanf("%f", &num);

    //for negative number
    if (num < 0) {
        num = -num;
    } 

    //digits before decimal
    int intPart = (int)num;
    while (intPart > 0) {
        sum += intPart % 10;
        intPart /= 10;
    }

    //for decimal value
    num = num - (int)num;
    while(num>0){
    	num = num*10;
    	int decimalNum = (int)num;
    	sum = sum + decimalNum;
    	num = num - decimalNum;
    }

    printf("The sum of the digits is: %d\n", sum);
}