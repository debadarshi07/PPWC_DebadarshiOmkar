#include <stdio.h>

int main()
{
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0) {
        printf("Invalid input.");
        return 0;
    }

    switch (marks)
    {
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
        grade = 'O';
        break;

    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
        grade = 'A';
        break;

    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
        grade = 'B';
        break;

    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
        grade = 'C';
        break;

    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
        grade = 'D';
        break;

    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
        grade = 'E';
        break;

    default:
        grade = 'F';
    }

    printf("The student has secured %c grade.", grade);
    return 0;
}