#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
	char *name;
	int rollno;
	float marks;
} Student;

int main() {
	
	Student student;
	Student *ptr = &student;
	int nameLength;
	
	printf("Enter student details.\n");
	printf("Enter the name of length: ");
	scanf("%d", &nameLength);
	
	ptr -> name = (char*) malloc((nameLength + 1) * sizeof(char));
	if (student.name == NULL) {
		printf("Memory allocation failed.");
		return 1;
	}
	
	printf("Enter name of student: ");
	fgets(ptr -> name, nameLength, stdin);
    
    printf("Enter roll number: ");
    scanf("%d", &ptr -> rollno);
    
    printf("Enter marks: ");
    scanf("%f", &ptr -> marks);

    printf("Student Name: %s\n", student.name);
    printf("Roll No: %d\n", student.rollno);
    printf("Marks: %.2f\n", student.marks);

    free(student.name);
	
	return 0;
}
