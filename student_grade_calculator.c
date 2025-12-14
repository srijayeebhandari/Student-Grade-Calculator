#include <stdio.h>

int main() {
    int n, i;
    float marks[100], sum = 0, average;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Input marks
    for(i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    // Calculate average
    average = sum / n;

    // Assign grade
    if(average >= 90)
        grade = 'A';
    else if(average >= 80)
        grade = 'B';
    else if(average >= 70)
        grade = 'C';
    else if(average >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Output results
    printf("\nTotal Marks = %.2f", sum);
    printf("\nAverage = %.2f", average);
    printf("\nGrade = %c\n", grade);

    return 0;
}
