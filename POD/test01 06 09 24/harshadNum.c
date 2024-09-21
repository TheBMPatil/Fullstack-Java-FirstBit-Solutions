#include <stdio.h>
int isHarshad(int);
void main()
{
    int num;
    printf("\nEnter a number to check if it is harshad no or not : ");
    scanf("%d", &num);
    isHarshad(num) ? printf("\nThe number %d is harshad Number.", num) : printf("\nThe number %d is NOT harshad Number.", num);
}
int isHarshad(int n)
{
    int sum = 0, temp = n;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    // printf("\n %d tmp %d n %d sum", temp, n, sum);
    if (temp % sum == 0)
    {
        return 1;
    }
    return 0;
}