#include <stdio.h>
void printAlphaPattern();
void main()
{
    printAlphaPattern();
}
void printAlphaPattern()
{
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
}