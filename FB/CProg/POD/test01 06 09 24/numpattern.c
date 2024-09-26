#include <stdio.h>
void main()
{
    for (int i = 1; i < 5; i++)
    {
        printf("%d\t", i);

        if (i == 4)
        {
            for (i -= 1; i > 0; i--)
            {
                printf("%d\t", i);
            }
            break;
        }
    }
}