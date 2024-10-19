#include<stdio.h> 

int main() {
	printf("Hello Debadarshi\n");
	
	int num;
	printf("Enter any integer value: ");
	scanf("%d", &num);
	printf("Value of num is: %d \n", num);
	
	int registrationNo;
	printf("Enter your registration number: ");
	scanf("%d", &registrationNo);
	printf("Your registration number: %d \n", registrationNo);
	
	float pocketMoney;
	printf("Enter your pocket money amount: ");
	scanf("%f", &pocketMoney);
	printf("The pocket money I get from parents is: %f \n", pocketMoney);
	
	char firstLetter;
	printf("Enter the first letter of your name: ");
	scanf("%s", &firstLetter);
	printf("First letter of my name is: %c \n", firstLetter);
	
	// This is a single line comment in C language
	/* This is a multiline comment in C language */ 
	
	printf("%p \n", &num);
	printf("%p \n", &registrationNo);
	printf("%p \n", &pocketMoney);
	printf("%p \n", &firstLetter);
	
	// Code to check whether a year is leap year or not
	int year;
	printf("Enter year to check: ");
	scanf("%d", &year);
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 ==0) {
		printf("%d is a leap year.\n", year);
	}
}