#include <stdio.h>
#include <string.h>

// Date structure with Day, Month, and Year
typedef struct Date
{
    int DD;
    int MM;
    int YYYY;
} Date;

// Function to store Date by reference
void storeDate(Date *dte, int *idx)
{
    printf("\nEnter DD: ");
    scanf("%d", &dte[*idx].DD);
    printf("\nEnter MM: ");
    scanf("%d", &dte[*idx].MM);
    printf("\nEnter YYYY: ");
    scanf("%d", &dte[*idx].YYYY);
}

// Function to display all stored Dates by reference
void displayDate(Date *dte, int *idx)
{
    printf("\nEntered data:");
    for (int i = 0; i < *idx; i++)
    {
        printf("\nDate: %d/%d/%d", dte[i].DD, dte[i].MM, dte[i].YYYY);
    }
}

// Function to search Date by Year (YYYY)
int searchByYYYY(Date *d, int yyyy, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (d[i].YYYY == yyyy)
        {
            return i;
        }
    }
    return -1;
}

// Function to display Date by address
void displayByAddr(Date *d)
{
    printf("\n");
    printf("\nDate: %d/%d/%d", d->DD, d->MM, d->YYYY);
}

Date storeByValue()
{
    Date temp;
    printf("\nEnter DD: ");
    scanf("%d", &temp.DD);
    printf("\nEnter MM: ");
    scanf("%d", &temp.MM);
    printf("\nEnter YYYY: ");
    scanf("%d", &temp.YYYY);
    return temp;
}

void displayByValue(Date d)
{
    printf("\nDate: %d/%d/%d", d.DD, d.MM, d.YYYY);
}

// Main function
void main()
{
    Date dob;
    dob = storeByValue();
    displayByValue(dob);

    Date s[10];
    int idx = 0;

    // Input number of dates to store
    printf("\nHow many Dates do you want to store: ");
    int n;
    scanf("%d", &n);

    // Loop to store multiple Dates
    for (int i = 0; i < n; i++, idx++)
    {
        storeDate(s, &idx);
    }

    // Display all stored Dates
    displayDate(s, &idx);

    int yyyy, ind;

    // Searching for a Date by only Year (YYYY)
    printf("\nEnter the Year (YYYY) you want to search: ");
    scanf("%d", &yyyy);

    ind = searchByYYYY(s, yyyy, n);

    // Check if a Date with the given year was found
    if (ind == -1)
    {
        printf("\nDate with the specified year not found.");
    }
    else
    {
        displayByAddr(&s[ind]);
    }
}
