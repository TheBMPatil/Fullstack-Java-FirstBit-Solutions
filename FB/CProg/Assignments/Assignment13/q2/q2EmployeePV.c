#include <stdio.h>
#include <string.h>
typedef struct Employee
{
    int empId;
    char empName[25];
    int empSalary;
} Employee;

Employee storeEmployeePV()
{
    Employee tmp;
    printf("Enter Employee Roll no:");
    scanf("%d", &tmp.empId);
    printf("Enter Employee empName:");
    scanf("%s", tmp.empName);
    printf("Enter Employee empSalary:");
    scanf("%d", &tmp.empSalary);
    return tmp;
}

void displayEmployeePV(Employee e)
{
    printf("\nRoll no of Employee : %d", e.empId);
    printf("\nempNameof Employee : %s", e.empName);
    printf("\nempSalary of Employee : %d", e.empSalary);
}

void main()
{
    Employee e1;
    e1 = storeEmployeePV();
    displayEmployeePV(e1);
}