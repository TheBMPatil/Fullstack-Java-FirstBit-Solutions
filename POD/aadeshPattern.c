#include <stdio.h>
void patternPrinter(char);
void main()
{
    char ch;
    printf("Enter a character : ");
    fflush(stdin);
    scanf("%c", &ch);
    printf("\nEntered character is: %c\n", ch);
    patternPrinter(ch);
}
void patternPrinter(char c)
{
    printf("\nOutput :\t");
    for (int i = 1; i < 6; i++)
    {
        if (c >= 'A' && c <= 'Z')
        {
            if (c < 'Z')
            {
                c = c + 1;
                printf("%c", c);
            }
            else
            {
                c = 'a';
                printf("%c", c);
            }
        }
        else if (c >= 'a' && c <= 'z')
        {
            if (c < 'z')
            {
                c = c + 1;
                printf("%c", c);
            }
            else
            {
                c = 'A';
                printf("%c", c);
            }
        }
    }
}