#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int rollNo;
    char name[25];
    int marks;
} Student;

void storeStudent(Student *std, int *idx)
{
    printf("\nEnter Roll No:");
    scanf("%d", &std[*idx].rollNo);
    printf("\nEnter Name:");
    fflush(stdin);
    gets(std[*idx].name);
    printf("\nEnter Marks:");
    scanf("%d", &std[*idx].marks);
}

void displayStudent(Student *std, int *idx)
{
    printf("\n Entered data");
    for (int i = 0; i < *idx; i++)
    {
        printf("\n");
        printf("\nRoll No: %d", std[i].rollNo);
        printf("\nName: %s", std[i].name);
        printf("\nMarks: %d", std[i].marks);
    }
}

void displayOne(Student *std)
{
    printf("\nRoll No: %d", std->rollNo);
    printf("\nName: %s", std->name);
    printf("\nMarks: %d", std->marks);
}

int seerachIndex(Student *s, int rn, int *idx)
{
    for (int i = 0; i < *idx; i++)
    {
        if (s[i].rollNo == rn)
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    Student s[10];
    int idx = 0;
    printf("\nHow many students do you want to Store : ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++, idx++)
    {
        storeStudent(s, &idx);
    }
    displayStudent(s, &idx);
    printf("\nEnter the Roll no of student you want to search");
    int rn;
    scanf("%d", &rn);
    rn = seerachIndex(s, rn, &idx);
    if (rn == -1)
    {
        printf("\nNo stud Found");
    }
    else
    {
        displayOne(&s[rn]);
    }
}