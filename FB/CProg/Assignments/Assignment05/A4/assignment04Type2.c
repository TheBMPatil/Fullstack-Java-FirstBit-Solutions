#include <stdio.h>
void armstrongInRange(int, int);
void primeInRange(int, int);
void perfectInRange(int, int);
void strongInRange(int, int);
void main()
{
    int ch = 1;
    while (ch)
    {
        int start, end;
        printf("\n What do you want to do : \n1> Armstrong Numbers in range.\n2> Prime numbers in range \n");
        printf("3> Perfect Numbers in range. \n4> Strong numbers in range \nEnter Your choice (1,2,3,4) :");
        scanf("%d", &ch);
        if (ch == 1)
        {

            printf("\n Enter The range start 3 digit  :");
            scanf("%d", &start);
            printf("\n Enter The range end 3 digit:");
            scanf("%d", &end);
            armstrongInRange(start, end);
        }
        else if (ch == 2)
        {
            printf("\n Enter The range start :");
            scanf("%d", &start);
            printf("\n Enter The range end :");
            scanf("%d", &end);
            primeInRange(start, end);
        }
        else if (ch == 3)
        {
            printf("\n Enter The range start :");
            scanf("%d", &start);
            printf("\n Enter The range end :");
            scanf("%d", &end);
            perfectInRange(start, end);
        }
        else if (ch == 4)
        {
            printf("\n Enter The range start :");
            scanf("%d", &start);
            printf("\n Enter The range end :");
            scanf("%d", &end);
            strongInRange(start, end);
        }
        else
        {
            printf("Invalid choice");
        }
    }
}
void armstrongInRange(int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        int rem, armN = 0;
        // printf("\n Inside For loop \n");
        int temp = i;
        while (temp)
        {
            // printf("Inside While \n");
            // printf("Temp : %d\n", temp);
            rem = temp % 10;
            armN += rem * rem * rem;
            temp /= 10;
        }
        if (armN == i)
        {
            printf("\n %d is Armstrong", i);
        }
        else
        {
            continue;
        }
    }
}
void primeInRange(int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        int j;
        if (i == 1 || i == 0)
        {
            continue;
        }
        for (j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == (i / 2) + 1)
        {
            printf("\n %d is Prime.", i);
        }
    }
}
void perfectInRange(int start, int end)
{

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
void strongInRange(int start, int end)
{

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