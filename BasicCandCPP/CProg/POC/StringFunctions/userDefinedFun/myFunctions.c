#include <stdio.h>
char *myStrCpy(char *, char *);
char *myStrCat(char *, char *);
int myStrLen(char *);
void main()
{
    char str[50], str2[50];
    printf("Enter a string :");
    gets(str);
    printf("%d : is lenght of your string.\n", myStrLen(str));
    printf("\n***** Copy *****");
    printf("\n%s : cpoied in str2", myStrCpy(str2, str));
    printf("\n***** Concat *****");
    printf("\n%s : Concated", myStrCat(str2, str));
}
int myStrLen(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;

    return i;
}
char *myStrCpy(char *dest, char *src)
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}

char *myStrCat(char str1[], char *str2)
{
    int i, x = myStrLen(str1);
    for (i = 0; str2[i] != '\0'; i++)
    {
        // printf("%d \t", i);
        str1[x + i] = str2[i];
    }
    // printf("%d", i);
    str1[myStrLen(str1) + i] = '\0';
    return str1;
}
// char *myStrRev(char *dest, char *src)