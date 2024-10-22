#include <stdio.h>
#include <string.h>

struct Employee {
    int code;
    char name[20];
    float salary;
};

typedef struct Student { // typedef is used to generate custom data type. Here instead of writing struct Student again and again to initialize Student element we can write only Student. ex: line 26
    char name[20];
    int section, rollNo;
} Student;

int main() {
    // Employee elements
    struct Employee employee1;
    strcpy(employee1.name, "Debadarshi Omkar");
    employee1.code = 1234567;
    employee1.salary = 50000.0;

    printf("Name: %s\nEmployee ID: %d\n", employee1.name, employee1.code);
    printf("Salary: %.2f\n\n", employee1.salary);

    // Student elements
    Student s1 = {"student_1", 28, 26};
    Student s2;
    strcpy(s2.name, "student_2");
    s2.section = 29;
    s2.rollNo = 1;

    printf("%s  %d  %d\n", s1.name, s1.section, s1.rollNo);
    printf("%s  %d  %d\n\n", s2.name, s2.section, s2.rollNo);
    
}