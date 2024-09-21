#include <stdio.h>
#include <string.h>
char *myStrTok(char[], char[]);
void main()
{
    printf("Enter a string:");
    char str[50];
    scanf("%s", &str);
    printf("\nEnter a delimiter to tokenize the string : ");
    char del[10];
    fflush(stdin);
    scanf("%s", &del);

    char *myTok = myStrTok(str, del);
    while (myTok != '\0')
    {
        pf("\tInsideWhile");
        printf("\n%s", myTok);
        myTok = myStrTok(NULL, del);
    }
}

char *myStrTok(char *strin, char delim[])
{
    static int count = 1;
    static char *strradd = strin;
    for (*strradd; strin[*strradd] != '\0'; (*strradd)++)
    {
        // printf("\nMyStrTok Called. Static Count = %d", count++);
        if (strin[*strradd] == delim)
        {
            return strin[*strradd + 1];
        }
    }
    if (strin[*strradd] == '\0')
    {
        return strin[*strradd];
    }
}