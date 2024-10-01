#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    int empId;
    char empName[25];
    int empSalary;
} Employee;

void storeEmployee(Employee *emp, int *idx)
{
    printf("\nEnter EmpID:");
    scanf("%d", &emp[*idx].empId);
    printf("\nEnter empempName:");
    fflush(stdin);
    gets(emp[*idx].empName);
    printf("\nEnter empSalary:");
    scanf("%d", &emp[*idx].empSalary);
}

void displayEmployee(Employee *emp, int *idx)
{
    printf("\n Entered data");
    for (int i = 0; i < *idx; i++)
    {
        printf("\n");
        printf("\nEMP ID: %d", emp[i].empId);
        printf("\nempName: %s", emp[i].empName);
        printf("\nempSalary: %d", emp[i].empSalary);
    }
}

Employee storeEmployeePV()
{
    Employee tmp;
    printf("Enter Employee EMP ID:");
    scanf("%d", &tmp.empId);
    printf("Enter Employee empName:");
    fflush(stdin);
    gets(tmp.empName);
    printf("Enter Employee empSalary:");
    scanf("%d", &tmp.empSalary);
    return tmp;
}

void displayEmployeePV(Employee e)
{
    printf("\nEMP ID of Employee : %d", e.empId);
    printf("\nempNameof Employee : %s", e.empName);
    printf("\nempSalary of Employee : %d", e.empSalary);
}

int searchEmpById(Employee *e, int id, int *idx)
{
    for (int i = 0; i < *idx; i++)
    {
        if (e[i].empId == id)
        {
            return i;
        }
    }
    return -1;
}

void printByAddress(Employee *e)
{
    printf("\n");
    printf("\nEMP ID: %d", e->empId);
    printf("\nempName: %s", e->empName);
    printf("\nempSalary: %d", e->empSalary);
}

void main()
{
    Employee e1;
    e1 = storeEmployeePV();
    displayEmployeePV(e1);

    Employee s[20];
    int idx = 0;
    printf("\nHow many Employees do you want to Store : ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++, idx++)
    {
        storeEmployee(s, &idx);
    }
    displayEmployee(s, &idx);

    printf("\nEnter Employee  ID to search : ");
    int id;
    scanf("%d", &id);
    int res = searchEmpById(s, id, &idx);
    if (res == -1)
    {
        printf("\n Not found");
    }
    else
    {
        printByAddress(&s[res]);
    }
}
