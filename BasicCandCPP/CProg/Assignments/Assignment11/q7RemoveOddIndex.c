#include <stdio.h>
char *removeOddIndexValues(char[]);
void main()
{
    char str[50];
    int n;
    printf("\nEnter A string :");
    gets(str);
    printf("\nResult :%s", removeOddIndexValues(str));
}
char *removeOddIndexValues(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 != 0)
        {
            str[i] = ' ';
        }
    }

    return str;
}