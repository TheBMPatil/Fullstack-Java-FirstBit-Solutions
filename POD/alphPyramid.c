#include <stdio.h>
void main()
{
    char alpha = 'A';
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("%c ", alpha);
            alpha++;
        }
        printf("\n");
    }
}