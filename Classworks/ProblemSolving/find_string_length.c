#include <stdio.h>
#include <string.h>

#define MAX 100

int length(char *str) {
	int len = 0;
	while(str[len] != '\0') {
		len++;
	}
	return len;
}

int main() {

	char str[20];
	printf("Enter a string: ");
	fgets(str, 20, stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("%s\n", str);
	printf("Length of string: %d\n", length(str));

	return 0;
}