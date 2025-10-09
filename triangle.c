#include <stdio.h>

int main() {
    int rows, i, j;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Inner loop to print asterisks in each row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after printing asterisks for the current row
        printf("\n");
    }

    return 0;
}
