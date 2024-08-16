// Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
void main()
{
    int A = 19, B = 40, C = 300;
    // if (A > B)
    // {
    //     if (A > C)
    //     {
    //         printf("%d A is greatest.", A);
    //     }
    //     else
    //     {
    //         printf("%d C is greatest.", C);
    //     }
    // }
    // else if (B > C)
    // {
    //     printf("%d B is greatest.", B);
    // }
    // else
    // {
    //     printf("%d C is greatest.", C);
    // }

    if (A > B && A > C)
    {
        printf("%d A is greatest.", A);
    }
    else if (B > C)
    {
        printf("%d B is greatest.", B);
    }
    else
    {
        printf("%d C is greatest.", C);
    }

    // using Ternary operator
    printf("\n");
    printf("%d is the greatest.", A > B && A > C ? A : B > C ? B
                                                             : C);
}