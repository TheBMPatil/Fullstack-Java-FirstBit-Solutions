#include <stdio.h>
#include <string.h>

// SalesManager structure with ID, name, salary, incentive, and target
typedef struct SalesManager
{
    int smID;
    char name[25];
    int salary;
    int incentive;
    int target;
} SalesManager;

// Function to store SalesManager details by reference
void storeSalesManager(SalesManager *saleMgr, int *idx)
{
    printf("\nEnter SM ID: ");
    scanf("%d", &saleMgr[*idx].smID);
    printf("\nEnter Name: ");
    fflush(stdin);
    gets(saleMgr[*idx].name);
    printf("\nEnter salary: ");
    scanf("%d", &saleMgr[*idx].salary);
    printf("\nEnter Incentive: ");
    scanf("%d", &saleMgr[*idx].incentive);
    printf("\nEnter Target: ");
    scanf("%d", &saleMgr[*idx].target);
}

// Function to display SalesManager details by reference
void displaySalesManager(SalesManager *saleMgr, int *idx)
{
    printf("\nEntered data:");
    for (int i = 0; i < *idx; i++)
    {
        printf("\n");
        printf("\nSM ID: %d", saleMgr[i].smID);
        printf("\nName: %s", saleMgr[i].name);
        printf("\nSalary: %d", saleMgr[i].salary);
        printf("\nIncentive: %d", saleMgr[i].incentive);
        printf("\nTarget: %d", saleMgr[i].target);
    }
}

// Function to store SalesManager details by value
SalesManager storeByVal()
{
    SalesManager temp;
    printf("\nEnter SM ID: ");
    scanf("%d", &temp.smID);
    printf("\nEnter Name: ");
    fflush(stdin);
    gets(temp.name);
    printf("\nEnter salary: ");
    scanf("%d", &temp.salary);
    printf("\nEnter Incentive: ");
    scanf("%d", &temp.incentive);
    printf("\nEnter Target: ");
    scanf("%d", &temp.target);
    return temp;
}

// Function to display SalesManager details by value
void displayByVal(SalesManager s)
{
    printf("\n");
    printf("\nSM ID: %d", s.smID);
    printf("\nName: %s", s.name);
    printf("\nSalary: %d", s.salary);
    printf("\nIncentive: %d", s.incentive);
    printf("\nTarget: %d", s.target);
}

// Function to search SalesManager by ID
int searcById(SalesManager *s, int id, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i].smID == id)
        {
            return i;
        }
    }
    return -1;
}

// Function to display SalesManager details by address
void displayByAddr(SalesManager *s)
{
    printf("\n");
    printf("\nSM ID: %d", s->smID);
    printf("\nName: %s", s->name);
    printf("\nSalary: %d", s->salary);
    printf("\nIncentive: %d", s->incentive);
    printf("\nTarget: %d", s->target);
}

// Main function
void main()
{
    SalesManager sm;
    // Store and display details using value-based functions
    sm = storeByVal();
    displayByVal(sm);

    SalesManager s[10];
    int idx = 0;
    printf("\nHow many SalesManagers do you want to store: ");
    int n;
    scanf("%d", &n);

    // Loop to store multiple SalesManager details
    for (int i = 0; i < n; i++, idx++)
    {
        storeSalesManager(s, &idx);
    }

    // Display details of all SalesManagers
    displaySalesManager(s, &idx);

    // Searching for a SalesManager by ID
    int id, ind;
    printf("\nEnter the SM ID you want to search: ");
    scanf("%d", &id);
    ind = searcById(s, id, n);

    // Check if SalesManager was found
    if (ind == -1)
    {
        printf("\nNot Found");
    }
    else
    {
        displayByAddr(&s[ind]);
    }
}
