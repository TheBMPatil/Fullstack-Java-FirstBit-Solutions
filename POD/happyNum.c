#include <stdio.h>
int isNumHappy(int);
void main()
{
    int num;
    printf("Ener a number to check if it is happy or not! : ");
    scanf("%d", &num);
    isNumHappy(num) ? printf("% d is a Happy number\n", num) : printf("%d is a UnHappy Number!! \n", num);
}
int isNumHappy(int num)
{
    int x;
    if (num < 9)
    {
        x = num * num;
    }
    else
    {
        x = num;
    }
    int sqrSum = 0;
    // printf("%d \n", x);
    while (x)
    {
        sqrSum = 0;
        // printf("%d \n", x);
        for (; x >= 1; x /= 10)
        {
            int rem = x % 10;
            int sqr = rem * rem;
            sqrSum += sqr;
        }
        if (sqrSum == 1)
        {
            return 1;
        }
        else if (sqrSum > 1 && sqrSum <= 9)
        {
            return 0;
        }

        x = sqrSum;
    }
    // printf("%d final sum\n", sqrSum);
    // printf("%d \n", x);
}