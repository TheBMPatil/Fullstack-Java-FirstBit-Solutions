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
        int sumOfFactorials = 0;
        int temp = i;

        while (temp > 0)
        {
            int digit = temp % 10;
            int factorial = 1;

            for (int j = 1; j <= digit; j++)
            {
                factorial *= j;
            }

            sumOfFactorials += factorial;
            temp /= 10;
        }

        if (sumOfFactorials == i)
        {
            printf("Number %d is a strong number \n", i);
        }
    }
}