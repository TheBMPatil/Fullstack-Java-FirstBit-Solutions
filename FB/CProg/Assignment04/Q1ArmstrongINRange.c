#include <stdio.h>
void main()
{
    armstrongNum();
}
void armstrongNum()
{
    int start, end;
    printf("Enter The range start :");
    scanf("%d", &start);
    printf("Enter The range end :");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        int rem, armN = 0;
        // printf("\n Inside For loop \n");
        int temp = i;
        while (temp)
        {
            // printf("Inside While \n");
            // printf("Temp : %d\n", temp);
            rem = temp % 10;
            armN += rem * rem * rem;
            temp /= 10;
        }
        if (armN == i)
        {
            printf("\n %d is Armstrong", i);
        }
        else
        {
            continue;
        }
    }
}