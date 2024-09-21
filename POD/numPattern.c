#include <stdio.h>
void printNumPattern(int);
void main()
{
    int n;
    printf("Enter a Num: \n");
    scanf("%d", &n);
    printNumPattern(n);
}
void printNumPattern(int num)
{
    int cnt = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("%3d", cnt++);
        }
        printf("\n");
    }
}