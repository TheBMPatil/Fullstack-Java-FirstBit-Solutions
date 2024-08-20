#include <stdio.h>
void main()
{
    int num;
    printf("Ener a number to check if it is happy or not! : ");
    scanf("%d", num);
    int x = num;
    int flag = 1;
    int sqrSum = 0;

    while (flag)
    {
        if (num > 9)
        {
            for (int i = num; i > 0; i /= 10)
            {
                int rem = i % 10;
                int sqr = rem * rem;
                sqrSum += sqr;
                // printf("%d", sqrSum);
            }
            // printf("%d \n", sqrSum);
            if (sqrSum == 1)
            {
                flag = 0;
                break;
            }
            else
            {
                num = sqrSum;
                sqrSum = 0;
            }
        }
        else
        {
            break;
        }
    }
    // while (num > 0)
    // {
    //     int rem = num % 10;
    //     int sqr = rem * rem;
    //     sqrSum += sqr;
    //     num = num / 10;
    // }
    if (flag == 0)
    {
        printf("%d is a HAPPY Number!! \n", x);
    }
    else
    {
        printf("% d is a VerySad number\n", x);
    }

    // printf("%d sqrsum", sqrSum);
}