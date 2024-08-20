// Check number is armstrong or not?
#include <stdio.h>
void main()
{
    int num, rem = 0;
    int armN = 0;
    printf("Enter A number to cheack armstrong. : ");
    scanf("%d", num);
    int temp = num;
    while (temp >= 0)
    {
        rem = temp % 10;
        armN += rem * rem * rem;
        temp /= 10;
    }
    if (armN == num)
    {
        printf("Number %d is Armstrong Number.", num);
    }
    else
    {
        printf("Number %d is Armstrong Number.", num);
    }
}