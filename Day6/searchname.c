#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
int searchStructuresByName(const struct Student *students, int numStudents, const char *searchName) {
    int i;
    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            return i;
        }
    }
    return -1;
}
int main() {
    int numStudents;
    char searchName[20];
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    struct Student *students = malloc(numStudents * sizeof(struct Student));
    printf("Enter the student details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nEnter the name of the student to search: ");
    scanf("%s", searchName);
    int index = searchStructuresByName(students, numStudents, searchName);
    if (index != -1) {
        printf("\nStudent found at index %d:\n", index);
        printf("Roll No: %d\n", students[index].rollno);
        printf("Name: %s\n", students[index].name);
        printf("Marks: %.2f\n", students[index].marks);
    } else {
        printf("\nStudent not found.\n");
    }
    free(students);
    return 0;
}
