#include <stdio.h>
int isLeapYear(int);
void main()
{
    printf("Enter your date of birth in the form DD MM YYYY: \n");
    int DD, MM, YYYY;
    scanf("%d", &DD);
    scanf("%d", &MM);
    if (MM > 12 || MM < 1 || MM == 0)
    {
        printf("Invalid Month bro enter again!!! \n");
        scanf("%d", &MM);
    }
    scanf("%d", &YYYY);

    printf("Your date of birth is %d / %d / %d \n", DD, MM, YYYY);
    int isLeap = isLeapYear(YYYY);
    if (isLeap)
    {
        printf("Leap year na bro!!! \n");
    }
    else
    {
        printf("Not leap year bro normal na..\n");
    }
}
int isLeapYear(int year)
{
    if (year % 4 == 0 || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}