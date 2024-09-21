#include <stdio.h>
void caseConvert(char[]);
void main()
{
    char str[20];
    printf("Enter a string :");
    gets(str);
    printf("\n You have entered : %s", str);
    caseConvert(str);
    printf("\n After conversion : %s", str);
}
void caseConvert(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (s[i] + 32);
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] - 32);
        }
    }
}
