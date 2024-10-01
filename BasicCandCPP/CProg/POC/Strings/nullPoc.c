#include <stdio.h>
void main()
{

    char arr[7] = {'A', 'B', '\0', 'C', 'D', 'E', 'F'};

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == '\0')
        {
            printf("\t Hello");
        }
        else
        {
            printf("\t %c", arr[i]);
        }
    }
}