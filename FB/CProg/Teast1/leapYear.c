#include <stdio.h>
void main()
{
    printf("Enter Year you want to cheack Leap or Not \n");
    int year;
    scanf("%d", &year);

    if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0)
    {
        printf("Entered year %d is Leap year. \n", year);
    }
    else
    {
        printf("Entered year %d is not Leap year. \n", year);
    }
}