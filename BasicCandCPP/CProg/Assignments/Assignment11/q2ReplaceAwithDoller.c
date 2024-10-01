#include <stdio.h>
#include <string.h>
char *replaceA(char[]);

void main()
{
    char str[50];
    printf("\nEnter a String :");
    scanf("%s", str);
    printf("\nNew STring:%s", replaceA(str));
}
char *replaceA(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            str[i] = '$';
        }
    }
    return str;
}