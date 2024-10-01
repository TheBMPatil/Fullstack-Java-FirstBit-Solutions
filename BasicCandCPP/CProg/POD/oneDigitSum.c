#include <stdio.h>
int sumOfDigits(int);
void main()
{
    printf("Enter a Number : ");
    int num;
    scanf("%d", &num);
    int temp = num;
    while (temp > 10)
    {
        temp = sumOfDigits(temp);
    }
    printf("%d is sum \n", temp);
}
int sumOfDigits(int num)
{
    int sum = 0;
    for (num; num > 0; num /= 10)
    {
        sum += num % 10;
    }
    return sum;
}