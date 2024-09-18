#include <stdio.h>
int myStrCmp(char[], char[]);
int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    int re = myStrCmp(str1, str2);
    if (re == 1)
    {
        printf("The larger string is: %s", str1);
    }
    else if (re == -1)
    {

        printf("The larger string is: %s", str2);
    }
    else
    {
        printf("Both strings are of equal length.");
    }
}
int myStrLen(char str[])
{
    int i = 0;
    for (; str[i] != '\0'; i++)
        ;
    return i;
}

int myStrCmp(char str1[], char str2[])
{
    int len1 = myStrLen(str1);
    int len2 = myStrLen(str2);
    if (len1 > len2)
    {
        return 1;
    }
    else if (len2 > len1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}