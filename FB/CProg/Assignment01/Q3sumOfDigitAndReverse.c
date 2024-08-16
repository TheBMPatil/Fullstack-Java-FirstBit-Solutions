#include <stdio.h>
void main()
{
    int num = 234;
    int sum = 0;
    int rev = 0;

    int r1 = num % 10;
    int q1 = num / 10;

    sum += r1;
    rev = (rev * 10) + r1;

    r1 = q1 % 10;
    q1 /= 10;

    rev = (rev * 10) + r1;
    sum += r1;

    r1 = q1 % 10;
    q1 /= 10;

    rev = (rev * 10) + r1;
    sum += r1;

    printf("Sum of %d digits is: %d \n Also Reverse of num: %d", num, sum, rev);
}