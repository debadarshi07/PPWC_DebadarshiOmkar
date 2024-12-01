#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_palindrome(char *string, int size) {
	int i = 0, j = size - 1;
	while (i < j) {
		if (string[i] != string[j]) {
			return false;
		}
		i++; j--;
	}
	return true;
}

int main() {
	char *string;
	int size = 0;

	printf("Enter the size of string: ");
	scanf("%d", &size);
	getchar();

	string = (char*) malloc(size * sizeof(char));
	if (string == NULL) {
		printf("Memory allocation failed.");
		return 0;
	}

	printf("Enter the string: ");
	fgets(string, size + 1, stdin);

	if(is_palindrome(string, size)) {
		printf("%s is palindrome.\n", string);
	} else {
		printf("%s is not a palindrome.\n", string);
	}

	return 0;
}