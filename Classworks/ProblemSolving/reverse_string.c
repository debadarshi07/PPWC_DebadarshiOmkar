#include <stdio.h>
#include <stdlib.h>

void reverse_a_string(char *string, int size) {
	int i = 0, j = size - 1;
	while (i < j) {
		char temp = string[i];
		string[i] = string[j];
		string[j] = temp;

		i++; j--;
	}

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

	reverse_a_string(string, size);

	printf("Reversed string: %s\n", string);

	return 0;
}