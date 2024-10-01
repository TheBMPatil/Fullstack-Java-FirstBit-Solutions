#include <stdio.h>
#include <string.h>
typedef struct Student
{
    int rollNo;
    char name[25];
    int marks;
} Student;

Student storeStudentPV()
{
    Student tmp;
    printf("Enter Student Roll no:");
    scanf("%d", &tmp.rollNo);
    printf("Enter Student Name:");
    scanf("%s", tmp.name);
    printf("Enter Student Marks:");
    scanf("%d", &tmp.marks);
    return tmp;
}

void displayStudentPV(Student s)
{
    printf("\nRoll no of student : %d", s.rollNo);
    printf("\nNameof student : %s", s.name);
    printf("\nMarks of student : %d", s.marks);
}

void main()
{
    Student s1;
    s1 = storeStudentPV();
    displayStudentPV(s1);
}