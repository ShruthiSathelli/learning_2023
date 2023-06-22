/*#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[20];
    float perc;
};
typedef struct Student Student;
void DisplayData(Student *student,int size){
    Student s;
    for(int i=0;i<size;i++){
       printf("StudentDetails%d:\n", i + 1);
       printf("Enter roll no.,Name,percentage:");
       scanf("%d %c %f",student[i].rollno,student[i].name,student[i].perc);
    }
}
int main(){
    int size;
    printf("Enter Number of students:");
    scanf("%d",&size);
    Student student[size];
    for(int i=0;i<size;i++){
       printf("Student%d:\n", i + 1);
       printf("Enter roll no.,Name,percentage:");
       scanf("%d%s%f",&student[i].rollno,student[i].name,&student[i].perc);
    }
    DisplayData(student,size);
    return 0;
}*/

#include <stdio.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student Student;
void displayData(Student *s, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter Number of students:");
    scanf("%d",&size);
    Student s[size];
    for(int i=0;i<size;i++){
       printf("Student%d:\n", i + 1);
       printf("Enter roll no.,Name,marks:");
       scanf("%d%s%f",&s[i].rollno,s[i].name,&s[i].marks);
    }
    displayData(s,size);
    return 0;
}
    