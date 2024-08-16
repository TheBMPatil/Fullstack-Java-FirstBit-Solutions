// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include <stdio.h>
void main()
{
    // To be accepted from user in future when i will learn about scanf

    int A = 12, B = 0;
    char op = 'D';

    if (op == 'A')
    {
        printf("Operation choosen is Addition \n");
        printf("%d is addition of A %d and B %d", A + B, A, B);
    }
    else if (op == 'S')
    {
        if (A < B)
        {
            printf("Operation choosen is  Substraction\n");
            printf("%d is Substraction of B %d and A %d", B - A, B, A);
        }
        else
        {

            printf("Operation choosen is  Substraction\n");
            printf("%d is Substraction of A %d and B %d", A - B, A, B);
        }
    }
    else if (op == 'M')
    {
        printf("Operation choosen is Multiplication \n");
        printf("%d is Multiplication of A %d and B %d", A * B, A, B);
    }
    else if (op == 'D')
    {
        if (A == 0 || B == 0)
        {
            printf("Zero is not divisible \n");
        }
        else
        {
            printf("Operation choosen is Division \n");
            printf("%d is Division of A %d and B %d", A / B, A, B);
        }
    }
}