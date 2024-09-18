#include <stdio.h>
#include <string.h>
int size = 10;
typedef struct Admin
{
    int aId;
    char name[25];
    int aSalary;
    float allowence;
} Admin;

void storeAdmin(Admin *adm, int *idx)
{
    printf("\nEnter Admin ID:");
    scanf("%d", &adm[*idx].aId);
    printf("\nEnter Name:");
    fflush(stdin);
    gets(adm[*idx].name);
    printf("\nEnter aSalary:");
    scanf("%d", &adm[*idx].aSalary);
    printf("\nEnter Allowence:");
    scanf("%f", &adm[*idx].allowence);
}

void displayAdmin(Admin *adm, int *idx)
{
    printf("\n Entered data");
    for (int i = 0; i < *idx; i++)
    {
        printf("\n");
        printf("\nAdmin ID: %d", adm[i].aId);
        printf("\nName: %s", adm[i].name);
        printf("\naSalary: %d", adm[i].aSalary);
        printf("\nAllowence: %.2f", adm[i].allowence);
    }
}

Admin storeByValue()
{
    Admin temp;
    printf("\nEnter Admin ID:");
    scanf("%d", &temp.aId);
    printf("\nEnter Name:");
    fflush(stdin);
    gets(temp.name);
    printf("\nEnter aSalary:");
    scanf("%d", &temp.aSalary);
    printf("\nEnter Allowence:");
    scanf("%f", &temp.allowence);
    return temp;
}

void displayByValue(Admin a)
{
    printf("\n");
    printf("\nAdmin ID: %d", a.aId);
    printf("\nName: %s", a.name);
    printf("\naSalary: %d", a.aSalary);
    printf("\nAllowence: %.2f", a.allowence);
}

int searchByid(Admin *a, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i].aId == id)
        {
            return i;
        }
    }
    return -1;
}

void printByAddr(Admin *a)
{
    printf("\n");
    printf("\nAdmin ID: %d", a->aId);
    printf("\nName: %s", a->name);
    printf("\naSalary: %d", a->aSalary);
    printf("\nAllowence: %.2f", a->allowence);
}

void main()
{
    Admin a1;
    a1 = storeByValue();
    displayByValue(a1);

    Admin s[size];
    int idx = 0;
    printf("\nHow many Admins do you want to Store : ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++, idx++)
    {
        storeAdmin(s, &idx);
    }
    displayAdmin(s, &idx);

    printf("\nEnter id of admin you want to search: ");
    int id, ind;
    scanf("%d", &id);
    ind = searchByid(s, id);

    if (ind == -1)
    {
        printf("\nNot Found");
    }
    else
    {
        printByAddr(&s[ind]);
    }
}
