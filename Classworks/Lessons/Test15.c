#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int maxSize = 100;
int *stack;
int top = -1;

void push(int data);
int pop();
int postfix(char *exp);
void stackResize(int ns);

int main() {
	stack = (int *) malloc(maxSize * sizeof(int));
	if (stack == NULL) {
		printf("Memory allocation failed.\n");
		return -1;
	}

	printf("Enter postfix expression: ");
	char exp[maxSize];
	fgets(exp, maxSize, stdin);
	// Replcing newline character with null character
    int len = strlen(exp);
    if (len > 0 && exp[len - 1] == '\n') {
        exp[len - 1] = '\0';
    }

	int result = postfix(exp);
	printf("Result of given postfix expression is %d.", result);

	free(stack);
	return 0;
}


void push(int data) {
	if (top == maxSize - 1) {
		printf("\nStack overflow.\n");
		stackResize(maxSize * 2);
		printf("Stack has been resized by twice of its previous size.\n");
	}
	top += 1;
	stack[top] = data;
}


// POP Operation

int pop() {
	if (top == -1) {
		printf("\nStack underflow.\n");
		return -1;
	}
	int popped = stack[top];
	top -= 1;

	return popped;
}


// StackResize Operation

void stackResize(int ns) {
	stack = (int *) realloc(stack, ns * sizeof(int));
	if (stack == NULL) {
		printf("Memory allocation failed.\n");
		return;
	}
	maxSize = ns;

}


// POSTFIX evaluation

int postfix(char *exp) {
	int i = 0, operand1, operand2, result;

	char ch;
	while ((ch = exp[i++]) != '\0') {
		if (isdigit(ch)) {
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
			operand2 = pop();
			if (operand2 == -1) {
				printf("Error: Insufficient operands.\n");
				exit(1);
			}
			operand1 = pop();
			if (operand1 == -1) {
				printf("Error: Insufficient operands.\n");
				exit(1);
			}

			switch (ch) {
				case '+':
					result = operand1 + operand2;
					break;

				case '-':
					result = operand1 - operand2;
					break;

				case '*':
					result = operand1 * operand2;
					break;

				case '/':
					if (operand2 == 0) {
						printf("Error: Division by zero.\n");
						exit(1);
					}
					result = operand1 / operand2;
					break;

				default:
					printf("Invalid expression.");
					exit(1);
			}
			push(result);
		}
		else if(ch == ' ') {
			continue;
		}
		else {
			printf("Invalid character: %c\n", ch);
			exit(1);
		}
	}
	return pop();
}