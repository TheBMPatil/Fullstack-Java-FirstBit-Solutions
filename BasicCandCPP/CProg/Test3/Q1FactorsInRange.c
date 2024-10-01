#include <stdio.h>
void factorsInRange(int, int);
void main()
{
    int start, end;
    printf("Enter the range \nStart:");
    scanf("%d", &start);
    printf("\nEnd");
    scanf("%d", &end);
    factorsInRange(start, end);
}
void factorsInRange(int start, int end)
{
    for (start; start <= end; start++)
    {
        printf("Factors of %d : ", start);
        for (int i = 1; i <= start; i++)
        {
            if (start % i == 0)
            {
                printf(" %d ", i);
            }
        }
        printf("\n");
    }
}
