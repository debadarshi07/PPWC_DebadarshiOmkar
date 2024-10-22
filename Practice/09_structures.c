#include <stdio.h>
#include <string.h>

struct Employee {
    int code;
    char name[20];
    float salary;
};

int main() {
    struct Employee employee1;
    strcpy(employee1.name, "Debadarshi Omkar");
    employee1.code = 1234567;
    employee1.salary = 50000.0;

    printf("Name: %s\nEmployee ID: %d\n", employee1.name, employee1.code);
    printf("Salary: %.2f\n", employee1.salary);

    
}