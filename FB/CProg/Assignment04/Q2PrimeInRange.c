#include <stdio.h>
void main()
{
    int start, end;
    printf("Enter The range start :");
    scanf("%d", &start);
    printf("Enter The range end :");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        int j;
        if (i == 1 || i == 0)
        {
            continue;
        }
        for (j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == (i / 2) + 1)
        {
            printf("\n %d is Prime.", i);
        }
    }
}