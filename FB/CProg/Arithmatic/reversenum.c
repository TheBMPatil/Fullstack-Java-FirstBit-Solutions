#include <stdio.h>
void main()
{
    int num = 123;
    int revnum = 0;

    int rem = num % 10;

    revnum = revnum * 10 + rem;

    // printf("%d \n ", revnum);
    num = num / 10;
    rem = num % 10;

    revnum = revnum * 10 + rem;

    // printf("%d \n ", revnum);
    num = num / 10;
    rem = num % 10;

    revnum = revnum * 10 + rem;

    printf("%d", revnum);
}