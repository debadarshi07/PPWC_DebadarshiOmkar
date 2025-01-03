#include <stdio.h>
#include <string.h>

struct Employee {
    int code;
    char name[20];
    float salary;
};

typedef struct Student { // typedef is used to generate custom structure data type. As a result,we don't need to write 'struct Student' again and again to define Student instances. We can only use the custom name. ex: line 26
    char name[20];
    int section, rollNo;
} Student;

struct {
    char name[20];
    int runs;
} player1, player2;

typedef struct Person {
    char name[20];
    int age;
    struct {
        int family_members;
        char father[20];
        char mother[20];
    } family;
} Person;

int main() {
    // Employee instances
    struct Employee employee1;
    strcpy(employee1.name, "Debadarshi Omkar");
    employee1.code = 1234567;
    employee1.salary = 50000.0;

    printf("Name: %s\nEmployee ID: %d\n", employee1.name, employee1.code);
    printf("Salary: %.2f\n\n", employee1.salary);

    // Student instances
    Student s1 = {"student_1", 28, 26};
    Student s2;
    strcpy(s2.name, "student_2");
    s2.section = 29;
    s2.rollNo = 18;

    printf("%s  %d  %d\n", s1.name, s1.section, s1.rollNo);
    printf("%s  %d  %d\n\n", s2.name, s2.section, s2.rollNo);


    // Anonymous Player instances
    strcpy(player1.name, "Sachin Tendulkar");
    player1.runs = 10000;
    printf("%s  %d\n", player1.name, player1.runs);

    strcpy(player2.name, "Sunil Gavaskar");
    player2.runs = 9000;
    printf("%s  %d\n\n", player2.name, player2.runs);


    // Person instances
    Person person1 = {"Debadarshi Omkar", 21, {8, "Ajaya Kumar Panda", "Jyotsnarani Panda"}};
    printf("%s  %d  %d  %s %s\n", person1.name, person1.age, person1.family.family_members, person1.family.father, person1.family.mother);

    Person person2;
    strcpy(person2.name, "Arya Samparna Panda");
    person2.age = 8;
    person2.family.family_members = 8;
    strcpy(person2.family.father, "Ashwini Kumar Panda");
    strcpy(person2.family.mother, "Runubala Panda");
    printf("%s  %d  %d  %s  %s\n\n", person2.name, person2.age, person2.family.family_members, person2.family.father, person2.family.mother);

    // Array of Person structure
    Person persons[] = {person1, person2};
    printf("Details of Persons: \n\n");

    for (int i = 0; i < sizeof(persons) / sizeof(person1); i++) {
        printf("Name: %s\nAge: %d\nNumber of family members: %d\nFather: %s\nMother: %s", persons[i].name, persons[i].age, persons[i].family.family_members, persons[i].family.father, persons[i].family.mother);
        printf("\n\n");
    }

    // Pointers to structures
    Student *ptr1 = &s1, *ptr2 = &s2;
    printf("Printing student details using pointers.\n");
    printf("%s  %d  %d\n", ptr1->name, (*ptr1).section, (*ptr1).rollNo);
    printf("%s  %d  %d\n\n", ptr1->name, ptr2->section, ptr2->rollNo);
    // '->' is used to directly access the member variables of a structure instance using pointer of that instance.

    return 0;
}