#include <stdio.h>
int isNumHappy(int);
void main()
{
    int num;
    printf("Ener a number to check if it is happy or not! : ");
    scanf("%d", &num);
    isNumHappy(num) ? printf("%d is a HAPPY Number!! \n", num) : printf("% d is a VerySad number\n", num);
}

int isNumHappy(int num)
{
    int sqrSum = 0;
    for (int i = num; i > 0; i = (i / 10))
    {
        int rem = i % 10;
        int sqr = rem * rem;
        sqrSum += sqr;
    }
    return (sqrSum == 1);
}