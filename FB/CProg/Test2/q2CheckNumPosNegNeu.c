#include <stdio.h>
void checkNum(int);
void main()
{
    printf("Cheack Num is Positive or negative or Neutral \n");
    printf("Enter A Number : ");
    int num;
    scanf("%d", &num);
    checkNum(num);
}
void checkNum(int num)
{
    if (num > 0)
    {
        printf("\n Entered Number %d is Positive Number!!!", num);
    }
    else if (num < 0)
    {
        printf("\n Entered Number %d is Negative Number!!!", num);
    }
    else if (num == 0)
    {
        printf("\n Entered Number %d is Neutral Number!!!", num);
    }
}