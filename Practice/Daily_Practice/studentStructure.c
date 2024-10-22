#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct Student {
    char *name;
    int regNo;
    float marks;
};

int main () {
    struct Student s1 = {"student_1", 200, 25};
    struct Student s2 = {"student_2", 500, 28};

    // For multiple students
    int strength;
    printf("Enter strength of class: ");
    scanf("%d", &strength);
    
    struct Student students[strength];

    // Taking input students' details
    for (int i = 0; i < strength; i ++) {
        printf("Enter the details for Student %d.\n", i + 1);

        printf("No. of characters in student's name: ");
        int nameLength;
        scanf("%d", &nameLength);

        students[i].name = (char*) malloc((nameLength + 1) * sizeof(char));

        if (students[i].name == NULL) {
            printf("No memory has been allocated");
            return 0;
        }

        printf("Enter name of student: ");
        scanf("%s", students[i].name);

        printf("Enter registration no: ");
        scanf("%d", &students[i].regNo);

        printf("Enter the marks: ");
        scanf("%f", &students[i].marks);
    }

    // Printing students list
    printf("\n----- Student's list -----\n");
    for (int i = 0; i < strength; i++) {
        printf("%s  %d  %.2f\n", students[i].name, students[i].regNo, students[i].marks);
    }

    return 0;
}