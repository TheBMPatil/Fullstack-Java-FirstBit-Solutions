// Check number is strong or not.
#include <stdio.h>
void main()
{
    printf("Enter a number : ");
    int num;
    scanf("%d", &num);
    int temp = num;
    int FcatSum = 0;

    while (temp != 0)
    {
        int rem = temp % 10;
        int fact = 1;
        if (rem > 0)
        {
            while (rem)
            {
                fact *= rem;
                rem--;
            }
            FcatSum += fact;
            temp /= 10;
        }
        else
        {
            FcatSum += fact;
            temp /= 10;
        }
    }
    // printf("%d is factsum.", FcatSum);
    if (FcatSum == num)
    {
        printf("%d is a strong number", num);
    }
    else
    {
        printf("%d is not a strong number.", num);
    }
}
