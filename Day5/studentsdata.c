#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int age;
    float marks;
} Student;
int main() {
    int n, i;
    Student *s;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    s= (Student *)malloc(n * sizeof(Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n--- Student Information ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Marks: %.2f\n", s[i].marks);
    }
    free(s);
    return 0;
}
