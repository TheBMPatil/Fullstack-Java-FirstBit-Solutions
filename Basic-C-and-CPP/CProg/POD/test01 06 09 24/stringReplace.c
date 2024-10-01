#include <stdio.h>
charReplaceSymbol(char[], char, char);
void main()
{
    char str[50];
    printf("Enter string:");
    gets(str);
    printf("\nYou hav eentered string: %s", str);
    printf("\nEnter character you want to replace:");
    char ch = getch();
    printf("\nEnter Symbol :");
    char symbol = getch();
    charReplaceSymbol(str, ch, symbol);
    printf("\nResult: %s", str);
}
charReplaceSymbol(char str[], char ch, char sym)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            str[i] = sym;
        }
    }
}