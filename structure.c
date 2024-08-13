#include <stdio.h>
// Define a structure to hold student information
struct Student {
    int id;
    char name[50];
    float grade;
};
int main() {
    int n;
    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    // Create an array of structures
    struct Student students[n];
    // Input student information
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter grade: ");
        scanf("%f", &students[i].grade);
    }

    // Display student information
    printf("\nStudent Information:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Grade: %.2f\n", students[i].grade);
    }

    return 0;
}
