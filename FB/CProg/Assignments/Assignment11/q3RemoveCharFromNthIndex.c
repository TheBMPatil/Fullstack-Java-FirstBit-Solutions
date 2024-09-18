#include <stdio.h>
char *removeN(char[], int);
void main()
{
    char str[50];
    int n;
    printf("\nEnter A string :");
    scanf("%s", str);
    printf("\nEnter The of element you want to delete :");
    scanf("%d", &n);
    printf("\nResult :%s", removeN(str, n));
}
char *removeN(char str[], int n)
{
    for (int i = n; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }
    return str;
}