// Add the (first and last) digit of a given number?
#include <stdio.h>
void main()
{
    printf("Enter A number : ");
    int num;
    scanf("%d", &num);
    int lastDigit, firstDigit;

    lastDigit = num % 10;
    firstDigit = num / 10;

    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }
    int sum = firstDigit + lastDigit;
    printf("%d is sum of first and last digit of given numbr %d.", sum, num);
}