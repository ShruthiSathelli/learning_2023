#include <stdio.h>
typedef struct {
    char name[20];
    int age;
    float marks;
} Student;
void swapStudents(Student *student1, Student *student2) {
    Student temp = *student1;
    *student1 = *student2;
    *student2 = temp;
}
int main() {
    Student student1, student2;
    Student *p1;
    Student *p2;
    p1=&student1;
    p2=&student2;
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", p1->name);
    printf("Age: ");
    scanf("%d", &p1->age);
    printf("Marks: ");
    scanf("%f", &p1->marks);
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", p2->name);
    printf("Age: ");
    scanf("%d", &p2->age);
    printf("Marks: ");
    scanf("%f", &p2->marks);
    printf("\n--- Before Swapping ---\n");
    printf("Student 1:\n");
    printf("Name: %s\n", p1->name);
    printf("Age: %d\n", p1->age);
    printf("Marks: %.2f\n", p1->marks);
    printf("\nStudent 2:\n");
    printf("Name: %s\n", p2->name);
    printf("Age: %d\n", p2->age);
    printf("Marks: %.2f\n", p2->marks);
    swapStudents(&student1, &student2);
    printf("\n--- After Swapping ---\n");
    printf("Student 1:\n");
    printf("Name: %s\n", p1->name);
    printf("Age: %d\n", p1->age);
    printf("Marks: %.2f\n", p1->marks);
    printf("\nStudent 2:\n");
    printf("Name: %s\n", p2->name);
    printf("Age: %d\n", p2->age);
    printf("Marks: %.2f\n", p2->marks);
    return 0;
}
