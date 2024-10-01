#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    double salary;
};

void main()
{

    struct Employee e[3];
    printf("\nEnter Data For Employees :");
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Data For Employe1 no : %d", i + 1);
        printf("\nEnter EMPID:");
        fflush(stdin);
        scanf("%d", &e[i].id);
        printf("\nEnter Name:");
        fflush(stdin);
        scanf("%s", e[i].name);
        fflush(stdin);
        printf("\nEnter salary:");
        scanf("%lf", &e[i].salary);
    }

    // Print Details
    printf("\nYour Employee Data  :");

    for (int i = 0; i < 3; i++)
    {
        printf("\n EMP no : %d", i + 1);
        printf("\nEMPID:%d", e[i].id);
        printf("\nName: %s", e[i].name);
        printf("\nSalary:", e[i].salary);
    }

    // having highest sal
    double maxSal = e[0].salary;
    for (int i = 1; i < 3; i++)
    {
        if (e[i].salary > maxSal)
        {
            maxSal = e[i].salary;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (e[i].salary == maxSal)
        {
            printf("\n EMP no : %d", i + 1);
            printf("\nEMPID:%d", e[i].id);
            printf("\nName: %s", e[i].name);
            printf("\nSalary:", e[i].salary);
        }
    }

    // Lowest salary
    double lowestSal = e[0].salary;
    for (int i = 1; i < 3; i++)
    {
        if (e[i].salary < lowestSal)
        {
            lowestSal = e[i].salary;
        }
    }
    printf("\nLowest Sal Emp");
    for (int i = 0; i < 3; i++)
    {
        if (e[i].salary == lowestSal)
        {
            printf("\n EMP no : %d", i + 1);
            printf("\nEMPID:%d", e[i].id);
            printf("\nName: %s", e[i].name);
            printf("\nSalary:", e[i].salary);
        }
    }
}