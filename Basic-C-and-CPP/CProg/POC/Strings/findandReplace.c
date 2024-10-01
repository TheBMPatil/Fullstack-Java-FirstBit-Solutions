#include <stdio.h>
#include <string.h>
void findAndReplace(char[], char, char);
void main()
{

    char str[50], ch, ch2;
    printf("Enter a String: ");
    gets(str);
    printf("%s", str);
    printf("\n Enter a char to replace:");
    ch = getch();
    // fflush(stdin);
    // scanf("%c", &ch);
    printf("\n Enter a Symbol to replace with:");
    ch2 = getch();
    // fflush(stdin);
    // scanf("%c", &ch2);
    findAndReplace(str, ch, ch2);

    printf("%s", str);
    // int *add = strchr(str, ch);
    // *add = ch2;
}
void findAndReplace(char str[], char ch, char sym)
{
    // printf("\n Inside fun");
    int i = 0;
    while (str[i] != '\0')
    {
        // printf("\n Inside while");
        if (str[i] == ch)
        {
            // printf("\n Inside IF");
            str[i] = sym;
        }
        i++;
    }
    // printf("%s", str);
}