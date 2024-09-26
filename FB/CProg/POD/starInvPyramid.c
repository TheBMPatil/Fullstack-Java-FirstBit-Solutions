#include <stdio.h>
void main()
{
    printf("The inverse Pyramid pattern : \n");
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    for (int i = 5; i > 0; i--)
    {
        
        for (int j = i; j <= 4; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}