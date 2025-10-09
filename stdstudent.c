#include <stdio.h>
#include <string.h> // Required for strcpy

// Define a structure named Student
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // Declare a structure variable of type Student
    struct Student student1;

    // Assign values to the members of student1
    strcpy(student1.name, "Alice Smith"); // Use strcpy for string assignment
    student1.age = 20;
    student1.grade = 85.5;

    // Declare another structure variable and initialize it directly
    struct Student student2 = {"Bob Johnson", 22, 92.0};

    // Print the details of student1
    printf("Student 1 Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n\n", student1.grade);

    // Print the details of student2
    printf("Student 2 Details:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Grade: %.2f\n", student2.grade);

    return 0;
}
