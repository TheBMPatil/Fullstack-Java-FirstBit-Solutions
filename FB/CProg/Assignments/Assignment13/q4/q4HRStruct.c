#include <stdio.h>
#include <string.h>

typedef struct HR
{
    int hrID;
    char name[25];
    int Salary;
    int commission;
} HR;

void storeHR(HR *hrS, int *idx)
{
    printf("\nEnter HR Id:");
    scanf("%d", &hrS[*idx].hrID);
    printf("\nEnter Name:");
    fflush(stdin);
    gets(hrS[*idx].name);
    printf("\nEnter Salary:");
    scanf("%d", &hrS[*idx].Salary);
    printf("\nEnter Commission:");
    scanf("%d", &hrS[*idx].commission);
}

void displayHR(HR *hrS, int *idx)
{
    printf("\n Entered data");
    for (int i = 0; i < *idx; i++)
    {
        printf("\n");
        printf("\nHR Id: %d", hrS[i].hrID);
        printf("\nName: %s", hrS[i].name);
        printf("\nSalary: %d", hrS[i].Salary);
        printf("\nCommission: %d", hrS[i].commission);
    }
}

HR storeByValue()
{
    HR temp;
    printf("\nEnter HR Id:");
    scanf("%d", &temp.hrID);
    printf("\nEnter Name:");
    fflush(stdin);
    gets(temp.name);
    printf("\nEnter Salary:");
    scanf("%d", &temp.Salary);
    printf("\nEnter Commission:");
    scanf("%d", &temp.commission);
    return temp;
}

void diaplayByValue(HR h)
{
    printf("\n");
    printf("\nHR Id: %d", h.hrID);
    printf("\nName: %s", h.name);
    printf("\nSalary: %d", h.Salary);
    printf("\nCommission: %d", h.commission);
}

int searcById(HR *h, int id, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (h[i].hrID == id)
        {
            return i;
        }
    }
    return -1;
}

void displayByAddr(HR *h)
{
    printf("\n");
    printf("\nHR Id: %d", h->hrID);
    printf("\nName: %s", h->name);
    printf("\nSalary: %d", h->Salary);
    printf("\nCommission: %d", h->commission);
}
void main()
{
    HR h;
    h = storeByValue();
    diaplayByValue(h);
    HR s[10];
    int idx = 0;
    printf("\nHow many HRs do you want to Store : ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++, idx++)
    {
        storeHR(s, &idx);
    }
    displayHR(s, &idx);

    int id, ind;
    printf("\nEnter the id of HR you want to search : ");
    scanf("%d", &id);
    ind = searcById(s, id, n);

    if (ind == -1)
    {
        printf("\nNot Found");
    }
    else
    {
        displayByAddr(&s[ind]);
    }
}
