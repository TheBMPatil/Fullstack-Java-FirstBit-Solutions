#include <stdio.h>
#include <stdlib.h>
char *strDup(char[]);
int myStrLen(char[]);
char *myStrRev(char[]);
int myStrCmp(char[], char[]);

int main()
{
    char str1[100], str2[100];
    printf("Enter the string: ");
    gets(str1);

    if (myStrCmp(strDup(str1), myStrRev(str1)))
    {
        printf("\nString is not Palindrome.!!");
    }
    else
    {
        printf("\nString is Palindrome.!!");
    }
}

char *strDup(char str[])
{
    int len = myStrLen(str);
    int i;
    char *dup = (char *)malloc(sizeof(char) * len);
    for (i = 0; i < len; i++)
    {
        dup[i] = str[i];
    }
    dup[i] = '\0';

    return dup;
}
int myStrLen(char str[])
{
    int i = 0;
    for (; str[i] != '\0'; i++)
        ;
    return i;
}

char *myStrRev(char str[])
{
    int len = myStrLen(str);
    char *temp = (char *)malloc(sizeof(char) * len);

    int j = 0;
    for (int i = len - 1; i >= 0; i--, j++)
    {
        temp[j] = str[i];
    }
    temp[j] = '\0';
    return temp;
}

int myStrCmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
