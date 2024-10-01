#include <stdio.h>
#include <string.h>
struct student
{
    int rollNO;
    char name[20];
    int marks;
};

struct person
{
    char name[50];
    int age;
    // char location[50];
};

void main()
{
    struct student s1, s2;
    s1.rollNO = 10;
    strcpy(s1.name, "Bhagvat");
    s1.marks = 87;

    printf("\nROll no: %d ", s1.rollNO);
    printf("\nName: %s ", s1.name);
    printf("\nMarks: %d ", s1.marks);

    // printf("\nEnter Your Roll no:");
    // scanf("%d", &s2.rollNO);
    // printf("\nEnter Your name:");
    // scanf("%s", s2.name);
    // printf("\nEnter Your Marks:");
    // scanf("%d", &s2.marks);

    // printf("\nROll no: %d ", s2.rollNO);
    // printf("\nName: %s ", s2.name);
    // printf("\nMarks: %d ", s2.marks);

    struct person p[5];

    printf("\nPersons data Input");
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter data of person%d :", i + 1);
        printf("\nEnter Name :");
        scanf("%s", p[i].name);
        printf("\nEnter Age :");
        scanf("%d", &p[i].age);
    }
    printf("\nPersons data Output");
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n: Person %d :", i + 1);
        printf("\nName :%s", p[i].name);
        printf("\nAge :%d ", p[i].age);
    }
}