#include <stdio.h>
#include <stdlib.h>
#define maxsize 10

// Function declaration
void push();
void pop();
void peek();
void display();

int stack[maxsize];
int top = -1;

void main() {

	printf("Static implementation of Stack.\n");

	int choice;

	while (1) {
		printf("\n 1.push");
		printf("\n 2.pop");
		printf("\n 3.peek");
		printf("\n 4.display");
		printf("\n 5.exit\n\n");

		printf("Enter choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1: push(); break;
			case 2: pop(); break;
            case 3: peek(); break;
			case 4: display(); break;
			case 5: exit(0);

			default: printf("Invalid choice.\n");
		}
	}
}


// PUSH operation

void push() {
	int num;
	if (top == maxsize - 1) {
		printf("Stack is full.\n");
		return;
	}
	printf("Enter the element to be pushed into the stack: ");
	scanf("%d", &num);
	top++;
	stack[top] = num;
}


// POP operation

void pop() {
	int num; 
	if (top == -1) {
		printf("Stack is empty.\n");
		return;
	}

	int popped = stack[top];
	top--;
	printf("Popped element: %d\n", popped);
}


// PEEK operation

void peek() {
	printf("Topmost element of the stack is: %d\n", stack[top]);
}


// DISPLAY operation

void display() {
	if (top == -1) {
		printf("Stack is empty.\n");
		return;
	}
	printf("Elements in the stack are: ");
	for (int i = 0; i <= top; i++) {
		printf("%d ", stack[i]);
	}
	printf("\n");
}