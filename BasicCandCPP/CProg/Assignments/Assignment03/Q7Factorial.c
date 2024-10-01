// Find factorial of number.
#include <stdio.h>
void main()
{
    int num;
    int Fact = 1;
    printf("Enter A number :");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid number!");
    }
    else if (num > 0)
    {
        // while (num)
        // {
        //     Fact *= num;
        //     num--;
        // }
        
        for (int i = 2; i <= num; i++)
            Fact *= i;
        
    }
    printf("%d is factorial of entered number", Fact);
}