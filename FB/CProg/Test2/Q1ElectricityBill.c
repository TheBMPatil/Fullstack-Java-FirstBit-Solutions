#include <stdio.h>
int eleBill(int);
void main()
{
    printf("Bill Generator.!\n");
    printf("Enter Your billing Units:");
    int unit;
    scanf("%d", &unit);
    int bill = eleBill(unit);
    printf("\n%d is your final Bill amount.", bill);
}
int eleBill(int unit)
{
    int bill = 0;
    if (unit >= 1 && unit <= 50)
    {
        bill = unit * 30;
    }
    else if (unit >= 51 && unit <= 150)
    {
        bill = unit * 40;
    }
    else if (unit >= 151)
    {
        bill = unit * 50;
    }
    return bill;
}
