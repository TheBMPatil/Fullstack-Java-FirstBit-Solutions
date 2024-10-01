// Check the given number is palindrome or not?

#include <stdio.h>
void main()
{
    printf("Enter A number :");
    int num;
    scanf("%d", &num);
    int temp = num;
    int rev = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }
    if (rev == num)
    {
        printf("%d is a palindrome Number.", num);
    }
    else
    {
        printf("%d Is not a palindrome number", num);
    }
}