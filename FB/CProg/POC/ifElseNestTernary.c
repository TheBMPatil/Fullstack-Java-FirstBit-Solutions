#include <stdio.h>
void main()
{
    int a = 10, b = 20, c = 30;
    printf("Using nested IF : \n");

    if (a > b)
    {
        if (a > c)
            printf("%d A is greater. \n", a);
        else
            printf("%d C is greater. \n", c);
    }
    else
    {
        if (b > c)
            printf("%d B is greater. \n", b);
        else
            printf("%d C is greater. \n", c);
    }

    printf("Using ternary operator : \n");

    printf("%d is greatest", a > b && a > c ? a : (b > c ? b : c));
}