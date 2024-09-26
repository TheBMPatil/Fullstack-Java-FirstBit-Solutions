#include <stdio.h>
void printTable(int, int);
void main()
{
    int s, e;
    printf("\n Print Tables of nums in range. \n");
    printf("Enter Start : \n");
    scanf("%d", &s);
    printf("Enter End : \n");
    scanf("%d", &e);
    printTable(s, e);
}
void printTable(int start, int end)
{
    for (start; start <= end; start++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d ", (start * i));
        }
        printf("\n");
    }
}