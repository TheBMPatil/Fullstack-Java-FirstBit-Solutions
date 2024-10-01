#include <stdio.h>
int revNum(int);
int noOfDigit(int);
void main()
{
    int num;
    printf("\nEnter a Number :");
    scanf("%d", &num);
    int rev = revNum(num);
    printf("\n%d : is revesre of %d", rev, num);
}

int revNum(int num)
{
    int rev = 0;
    // while (num)
    // {
    //     rev = (rev * 10) + (num % 10);
    //     num = num / 10;
    //     rev = (rev * 10) + revNum(num);
    //     return rev;
    // }

    int numlen = noOfDigit(num);
    while (numlen )
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
        numlen--;
    }
    return rev;
}

int noOfDigit(int num)
{
    int cnt = 0;
    while (num != 0)
    {
        num /= 10;
        cnt++;
    }
    return cnt;
}