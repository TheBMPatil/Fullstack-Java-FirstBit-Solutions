#include <stdio.h>
void printDigitsOfString(char[]);
void main()
{
    // int size;
    // printf("\nEnter The size of string");
    // scanf("%d", &size);
    char str[50];
    printf("Enter the string:");
    gets(str);

    printDigitsOfString(str);
}
void printDigitsOfString(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] < '9')
        {
            printf("%c", str[i]);
        }
    }
}