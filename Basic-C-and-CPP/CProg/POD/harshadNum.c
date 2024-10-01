#include <stdio.h>
int isHarshadNum(int num);
void main()
{
    int n;
    printf("Enter a num to cheack if its HARSHAD num or not :");
    scanf("%d", &n);
    isHarshadNum(n) ? printf("\nYes %d is HARSHAD number.! ", n) : printf("\n%d is NOT HARSHAD number.! ", n);
}
int isHarshadNum(int num)
{
    int temp = num, sum = 0;
    // printf("\n %d twmp", temp);
    while (temp)
    {
        sum += (temp % 10);
        temp /= 10;
        // printf("\n %d twmp");
    }
    // printf("\n %d twmp", temp);
    // printf("\n %d Sum", sum);
    return (num % sum == 0);
}