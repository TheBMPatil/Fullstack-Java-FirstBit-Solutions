#include <stdio.h>
void main()
{
    int b, e;
    printf("Enter Base");
    scanf("%d", &b);
    printf("Enter Power(expon..) :");
    scanf("%d", &e);
    printf("\n%d : is %d power %d", myPow(b, e), b, e);
}
int myPow(int base, int expo)
{

    for (int i = 1; i < expo; i++)
    {
        base *= base;
    }
    return base;
}