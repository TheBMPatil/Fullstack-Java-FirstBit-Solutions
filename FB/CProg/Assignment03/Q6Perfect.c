// Check number is perfect or not.
#include <stdio.h>
void main()
{
    printf("Enter A number :");
    int num, i = 1, cnt = 0, sumOfDivisor = 0;
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            sumOfDivisor += i;
            cnt++;
        }
        i++;
    }
    if (sumOfDivisor == num)
    {
        printf("Number %d is perfect number", num);
    }
    else
    {
        printf("%d is not perfect number", num);
    }
}