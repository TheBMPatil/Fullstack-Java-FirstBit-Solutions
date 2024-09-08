#include <stdio.h>
#include <string.h>
char *myStrDuplicate(char[]);
void main()
{
    char str[50];
    printf("Enter A string : ");
    gets(str);
    printf("\nWe now duplicate the strig \n original string address : %u", str);
    char *dup = myStrDuplicate(str);
    printf("\nduplicate string : %s \n Its Address : %u", dup, dup);

    printf("\n%d is length of string using my len fun.", myStrLen(str));
    printf("\n%d is length of string using inbuilt len fun.", strlen(str));
}
char *myStrDuplicate(char str[])
{
    int len = strlen(str);
    char *dup = (char *)malloc(sizeof(char) * (len));
    for (int i = 0; i <= len; i++)
    {
        dup[i] = str[i];
    }

    return dup;
}

int myStrLen(char str[])
{
    int len;
    for (len = 0; str[len] != '\0'; len++)
        ;

    return len;
}