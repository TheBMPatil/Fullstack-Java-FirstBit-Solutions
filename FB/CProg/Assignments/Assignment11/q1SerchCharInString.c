#include <stdio.h>
#include <string.h>
char *myStrChr(char[], char);

void main()
{
    char str[50];
    printf("\nEnter a String :");
    scanf("%s", str);
    char chr;
    printf("\nEnter a charater to search in string :");
    fflush(stdin);
    scanf("%c", &chr);
    printf("\n Using Inbuilt Function");
    printf("\n%c found at index : %d", chr, strchr(str, chr) - str);
    printf("\n Using User define Function");
    printf("\n%c found at index : %d", chr, myStrChr(str, chr) - str);
}

char *myStrChr(char str1[], char chr)
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == chr)
        {
            return &str1[i];
        }
    }
    return NULL;
}