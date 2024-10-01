#include <stdio.h>
#include <string.h>
// Distance ( feet, inch)
typedef struct Distance
{
    int feet;
    int inch;
} Distance;

void storeDistance(Distance *dist, int *idx)
{
    printf("\nEnter Feet:");
    scanf("%d", &dist[*idx].feet);
    printf("\nEnter inch:");
    scanf("%d", &dist[*idx].inch);
}

void displayDistance(Distance *dist, int *idx)
{
    printf("\n Entered data");
    for (int i = 0; i < *idx; i++)
    {
        printf("\n");
        printf("\nRoll No: %d", dist[i].feet);
        printf("\ninch: %d", dist[i].inch);
    }
}

Distance storeByVal()
{
    Distance dist;
    printf("\nEnter Feet:");
    scanf("%d", &dist.feet);
    printf("\nEnter inch:");
    scanf("%d", &dist.inch);
    return dist;
}

void printByVal(Distance d)
{
    printf("\ninch: %d \nFeet: %d", d.inch, d.feet);
}

int searchByAddress(Distance *d, int size, int val)
{
    for (int i = 0; i < size; i++)
    {
        if (d[i].feet == val)
        {
            return i;
        }
    }
    return -1;
}

void printByAdd(Distance *d)
{
    printf("\nInch: %d \nFeet: %d", d->inch, d->feet);
}

void main()
{
    Distance d;
    d = storeByVal();
    printByVal(d);
    Distance s[10];
    int idx = 0;
    printf("\nHow many Distances do you want to Store : ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++, idx++)
    {
        storeDistance(s, &idx);
    }
    displayDistance(s, &idx);
    printf("\nEnter the Feet to search ");
    int f;
    scanf("%d", &f);
    int x = searchByAddress(s, n, f);
    printByAdd(&s[x]);
}
