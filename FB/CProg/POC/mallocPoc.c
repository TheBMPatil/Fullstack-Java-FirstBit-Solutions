#include <stdio.h>
#include <stdlib.h>
void main()
{
    int size = 5;
    char *ptr = (char *)malloc(size);
    for (int i = 0; i < size; i++)
    {
        ptr[i] = 'A';
        printf("%c", ptr[i]);
    }
}