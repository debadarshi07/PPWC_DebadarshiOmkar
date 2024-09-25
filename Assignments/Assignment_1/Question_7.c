#include <stdio.h>

int main() {
    char desiredGrade;
    float minAvg, currAvg, finalPercentage, totalPoints, currPoints, finalPoints, scoreNeeded;

    printf("Enter desired grade: ");
    scanf("%c", &desiredGrade);

    printf("Enter minimum average required: ");
    scanf("%f", &minAvg);

    printf("Enter current average in course: ");
    scanf("%f", &currAvg);

    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%f", &finalPercentage);

    totalPoints = minAvg;
    currPoints = currAvg * (1 - finalPercentage / 100);
    finalPoints = totalPoints - currPoints;
    scoreNeeded = finalPoints / (finalPercentage / 100);

    printf("You need a score of %.2f on the final to get a %c\n", scoreNeeded, desiredGrade);
    return 0;
}