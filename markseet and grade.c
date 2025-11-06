#include <stdio.h>
int main() {
    char name[50];
    char regNo[20];
    int marks[5];
    int total = 0;
    float average;
    char grade;
    printf("=====================================\n");
    printf("       STUDENT GRADE CALCULATOR      \n");
    printf("=====================================\n");
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter register number: ");
    scanf("%s", regNo);
    printf("Enter marks for 5 subjects (0–100):\n");
    for (int i = 0; i < 5; i++) {
        printf(" Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf(" Invalid marks! Must be between 0 and 100.\n");
            return 1;
        }
        total += marks[i];
    }
    average = total / 5.0;
    if (average >= 80)
        grade = 'A';
    else if (average >= 60)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';
    printf("\n=====================================\n");
    printf("          STUDENT REPORT CARD         \n");
    printf("=====================================\n");
    printf(" Name           : %s\n", name);
    printf(" Register No.   : %s\n", regNo);
    printf("-------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf(" Subject %d Marks : %d\n", i + 1, marks[i]);
    }
    printf("-------------------------------------\n");
    printf(" Total Marks    : %d / 500\n", total);
    printf(" Average Marks  : %.2f\n", average);
    printf(" Grade          : %c\n", grade);
    printf("=====================================\n");
    return 0;
}

