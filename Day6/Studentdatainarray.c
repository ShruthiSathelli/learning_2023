#include<stdio.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student Student;
int main(){
    int size;
    printf("Enter Number of Students:");
    scanf("%d",&size);
    Student s[size];
    for(int i=0;i<size;i++){
        printf("Enter Details of Student %d:\n",i+1);
        scanf("%d%s%f",&s[i].rollno,s[i].name,&s[i].marks);
    }
      printf("----Student Details----\n");
    for(int i=0;i<size;i++){
        printf("%d %s %.2f\n",s[i].rollno,s[i].name,s[i].marks);
    }return 0;
}


