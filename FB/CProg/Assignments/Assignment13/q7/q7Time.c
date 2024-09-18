#include <stdio.h>
#include <string.h>

typedef struct Time
{
    int HH;
    int MM;
    int SS;
} Time;

void storeTime(Time *dte, int *idx)
{
    printf("\nEnter HH:");
    scanf("%d", &dte[*idx].HH);
    printf("\nEnter MM:");
    scanf("%d", &dte[*idx].MM);
    printf("\nEnter SS:");
    scanf("%d", &dte[*idx].SS);
}

void displayTime(Time *dte, int *idx)
{
    printf("\n Entered data");
    for (int i = 0; i < *idx; i++)
    {
        printf("\n");
        printf("\nTime : %d:%d:%d", dte[i].HH, dte[i].MM, dte[i].SS);
    }
}

Time storeTimeByVal()
{
    Time temp;
    printf("\nEnter HH:");
    scanf("%d", &temp.HH);
    printf("\nEnter MM:");
    scanf("%d", &temp.MM);
    printf("\nEnter SS:");
    scanf("%d", &temp.SS);

    return temp;
}
void printTimeByVal(Time t)
{
    printf("\nTime(hh:mm:ss) = %d:%d:%d", t.HH, t.MM, t.SS);
}

int searchTimeByAddr(Time *t, int size, int HH)
{
    for (int i = 0; i < size; i++)
    {
        if (t[i].HH == HH)
        {
            return i;
        }
    }
    return -1;
}

void printByAddress(Time *t)
{
    printf("\nTime(hh:mm:ss) = %d:%d:%d", t->HH, t->MM, t->SS);
}

void main()
{
    Time t1;
    t1 = storeTimeByVal();
    printTimeByVal(t1);
    Time s[10];
    int idx = 0;
    printf("\nHow many Times do you want to Store : ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++, idx++)
    {
        storeTime(s, &idx);
    }
    displayTime(s, &idx);
    printf("\nEnter Hour you want to serach : ");
    int hr;
    scanf("%d", &hr);
    int x = searchTimeByAddr(s, n, hr);
    printByAddress(&s[x]);
}
