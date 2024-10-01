#include <stdio.h>
char *swapFL(char[]);
void main()
{
    char str[50];
    int n;
    printf("\nEnter A string :");
    scanf("%s", str);
    printf("\nResult :%s", swapFL(str));
}
char *swapFL(char str[])
{
    int len = strlen(str) - 1;
    char temp = str[0];
    str[0] = str[len];
    str[len] = temp;
    return str;
}