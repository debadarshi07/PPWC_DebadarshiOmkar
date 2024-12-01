#include <stdio.h>

int main() {
	double num;
	int sum = 0;
	printf("Enter a number upto 8 decimal places: ");
	scanf("%lf", &num);

	if (num < 0) {
		num *= -1;
	}

	num *= 100000000;
	long int intNum = (long int) num;
	while(intNum != 0) {

		sum += (intNum % 10);
		intNum /= 10;
		
	}
	printf("%d\n", sum);
}