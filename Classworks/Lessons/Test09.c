#include <stdio.h>
#include <string.h>

typedef struct Student {
	char name[20];
	int rollno;
	float marks;
	
	struct Birthday {
		int day, month, year;
	} dob;
	
} Student;

int main() {

	//struct Student s1 = {"student-1", 5006, 92.5};
	//struct Student s2, s3;
	
	//strcpy(s2.name, "student-2");
	//s2.rollno = 5007;
	//s2.marks = 99;
	
	// taking user input
	//printf("Enter name, roll number, marks of 3rd student: ");
	//scanf("%s %d %f", &s3.name, &s3.rollno, &s3.marks);
	
	// printing the values
	//printf("1st Student: %s, %d, %.2f\n", s1.name, s1.rollno, s1.marks);
	//printf("2nd Student: %s, %d, %.2f\n", s2.name, s2.rollno, s2.marks);
	//printf("3rd Student: %s, %d, %.2f\n", s3.name, s3.rollno, s3.marks);
	
	//int strength = 4;
	// Student students[strength];
	
// 	printf("Provide inputs for students.\n");
// 	for (int i = 0; i < strength; i++) {
// 		Student student;
// 		printf("Enter name, roll number, marks of student %d: ", i + 1);
// 		scanf("%s %d %f", student.name, &student.rollno, &student.marks);
// 		//printf("");
// 		printf("Enter date of birth of student(date month year) %d:",i + 1);
// 		scanf("%d %d %d", &student.dob.day, &student.dob.month, &student.dob.year);
// 		students[i] = student;
// 		printf("");
// 	}
	
// 	printf("Student Data: \n");
// 	for (int i = 0; i < strength; i++) {
// 		printf("Student-%d : %s\t%d\t%.2f\n",i, students[i].name, students[i].rollno, students[i].marks);
// 	}
	
	
//	Student s1;
// 	Student *ptr = &s1;
	
// 	strcpy(ptr -> name, "Student_1");
// 	ptr -> rollno = 34;
// 	ptr -> marks = 22.5;
	
// 	printf("%s %d %.2f\n", ptr->name, ptr -> rollno, ptr -> marks);
// 	printf("%s %d %.2f\n", (*ptr).name, (*ptr).rollno, (*ptr).marks);

	return 0;
}
