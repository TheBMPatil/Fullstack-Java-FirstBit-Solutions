#include <stdio.h>
int searchChar(char[], char);
void getInput(char[]);
void main()
{
    char str[50];
    getInput(str);
    // gets(str);

    printf("\nYou entered string : %s", str);
    char ch;
    printf("\nEnter Character you wnt to serch in string: ");
    scanf("%c", &ch);
    // printf("\n Char Found at %d", searchChar(str, ch));
    int x = searchChar(str, ch);
    if (x == -1)
    {
        printf("\nChar Not Found at");
    }
    else
    {
        printf("\nChar Found at %d", x);
    }
}
int searchChar(char str[], char key)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == key)
        {
            return i;
        }
        i++;
    }
    return -1;
}

void getInput(char str[])
{
    printf("Enter a string :");
    // scanf("%s", &str);
    gets(str);
}