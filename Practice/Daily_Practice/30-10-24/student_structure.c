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
    Student *stud_ptr = &student;
    int nameLength;

    printf("Enter student details.\n");
    printf("Enter the no. of characters in name: ");
    scanf("%d", &nameLength);
    getchar();

    stud_ptr->name = (char *)malloc((nameLength + 1) * sizeof(char));
    if (stud_ptr -> name == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter name of student: ");
    fgets(stud_ptr -> name, 20, stdin);
    stud_ptr -> name[strcspn(stud_ptr -> name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &stud_ptr -> rollno);

    printf("Enter marks: ");
    scanf("%f", &stud_ptr -> marks);

    printf("\n-----Student Details-----\n");
    printf("Student Name: %s\n", stud_ptr -> name);
    printf("Roll No: %d\n", stud_ptr -> rollno);
    printf("Marks: %.2f\n", stud_ptr -> marks);

    free(stud_ptr -> name);

    return 0;
}
