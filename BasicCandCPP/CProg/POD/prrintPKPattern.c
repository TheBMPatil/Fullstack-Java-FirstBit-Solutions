#include <stdio.h>
void main()
{
    // int flag = 1;
    // int i = 1;
    // while (flag)
    // {

    //     if (i == 10)
    //     {
    //         for (i = 10; i >= 1; i--)
    //         {
    //             printf("%d ", i);
    //         }
    //         flag = 0;
    //     }
    //     else
    //     {
    //         for (i = 1; i < 10; i++)
    //         {
    //             printf("%d ", i);
    //         }
    //     }
    // }
    for (int i = 1; i <= 11; i++)
    {
        if (i < 11)
        {
            printf("%d ", i);
        }
        else
        {
            for (int j = 9; j > 0; j--)
            {
                printf("%d ", j);
            }
        }
    }
}
