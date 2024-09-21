#include <stdio.h>
void main()
{
    printf("Hey broo we will print the star patterns \n");

    printf("Pattern 1 \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("Pattern 2 \n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("Pattern 3 \n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf(" *");
        }

        printf("\n");
    }
}