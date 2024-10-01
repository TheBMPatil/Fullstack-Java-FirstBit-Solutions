// Check number is prime or not.
#include <stdio.h>
void main()
{
    printf("Enter a number to cheack Prime or Not :");
    int num;
    scanf("%d", &num);
    int i = 2, cnt = 0;
    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            cnt++;
        }
        i++;
    }
    if (cnt > 0 || num == 1)
    {
        printf("num %d is not Prime. \n", num);
    }
    else
    {
        printf("num %d is  Prime. \n", num);
    }

    printf("Exit value of I is : %d", i);
}