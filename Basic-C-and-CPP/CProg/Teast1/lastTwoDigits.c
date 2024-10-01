#include <stdio.h>
void main()
{
    int lastTwoDig = 0, secondLastDigit = 0;

    int num;
    printf("Enter a Number : \n");
    scanf("%d", &num);
    int lastDigit = num % 10;
    num = num / 10;
    secondLastDigit = num % 10;
    lastTwoDig = lastDigit + secondLastDigit * 10;

    // for (int i = 1; i < 2; i++)
    // {
    //     lastTwoDig = lastTwoDig + ((num % 10) * 10);
    //     num = num / 10;
    // }
    printf("%d", lastTwoDig);
}