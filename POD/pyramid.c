#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Ye hain Pyramid 1 \n");
    pyramid(&num);
    printf("Ye hain Pyramid 2 \n");
    pyramidTrai(&num);
}
void pyramid(int *num)
{
    for (int i = 1; i <= (*num); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
void pyramidTrai(int *num)
{
    for (int i = 1; i <= (*num); i++)
    {
        for (int j = (*num); j > i; j--)
        {
            printf("   ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}