#include <stdio.h>
void main()
{
    int start, end;
    printf("Enter The range start :");
    scanf("%d", &start);
    printf("Enter The range end :");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        int sumOfDivisor = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sumOfDivisor += j;
            }
        }

        if (sumOfDivisor == i && i != 0)
        {
            printf("Number %d is perfect number \n", i);
        }
    }
}