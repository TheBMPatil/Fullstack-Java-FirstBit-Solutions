#include <stdio.h>
void printTable();
void main()
{
    printTable();
}
void printTable()
{
    printf("Enter A number to print its table.");
    int num;
    scanf("%d", &num);
    for (int i = 10; i >= 1; i--)
    {
        printf("\n %d * %d = %d ", i, num, i * num);
    }
}