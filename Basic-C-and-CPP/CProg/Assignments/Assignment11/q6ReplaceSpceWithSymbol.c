#include <stdio.h>
#include <string.h>
char *spaceReplaceHashtag(char[]);

void main()
{
    char str[50];
    printf("\nEnter a String :");
    gets(str);
    printf("\nNew STring:%s", spaceReplaceHashtag(str));
}
char *spaceReplaceHashtag(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '#';
        }
    }
    return str;
}