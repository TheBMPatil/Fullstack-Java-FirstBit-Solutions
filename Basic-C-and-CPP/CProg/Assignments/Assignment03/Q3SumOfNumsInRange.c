// Calculate sum of numbers in the given range.
#include <stdio.h>
void main()
{
    int start, end;
    printf("Enter starting range :");
    scanf("%d", &start);
    // printf("\n");
    printf("Enter Ending range : ");
    scanf("%d", &end);
    int sum = 0;
    int temp = start;

    while (temp <= end)
    {
        sum += temp;
        temp++;
    }
    printf("Sum of numbers between %d to %d is = %d", start, end, sum);
}