// Print table for the given number.
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number. \n");
    scanf("%d", &num);
    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d \n", num, i, num * i);
        i++;
    }
    printf("Exit value of i = %d", i);
}