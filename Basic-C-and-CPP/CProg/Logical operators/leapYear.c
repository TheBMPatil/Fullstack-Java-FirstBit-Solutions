#include <stdio.h>
void main()
{
    // printf("Leap year");
    int year = 2021;

    printf("Note: if isleap = 1  then leap year. IF 0 then NOT leap. \n");
    int isLeap = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
    printf("Input year is : %d \n", year);

    printf("isLeap : %d", isLeap);
}