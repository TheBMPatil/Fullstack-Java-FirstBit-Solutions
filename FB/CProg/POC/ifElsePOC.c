#include <stdio.h>
void main()
{
    // if (printf("FirstBit") > printf("Solutions"))
    // {
    //     printf("IF");
    // }
    // else
    // {
    //     printf("Else");
    // }

    int a = 10, b = 0;
    // if (a++ || b++)
    // {
    //     printf("%d , %d", b, a);
    // }

    // b = 40;
    // if (a + b)
    // {
    //     printf("If block %d");
    // }
    // else
    // {
    //     printf("Else");
    // }

    b = 20;
    if (a++ && b++)
    {
        printf("%d,%d", a, b);
    }
}