#include <stdio.h>

int main() {
	int x = 10;
	
	int ptr = &x, ptr2 = &x;
	
	printf("ptr: %u", ptr);
	printf("ptr2: %u", ptr2);
}