#include <stdio.h>
void patternCap(int);
void patternSmall(int);
void patternCapAlternate(int);
void patternSmallAlternate(int);
void patternCapOrSmallWithCharIn(int, char);
void main()
{
    char ch;
    int n;
    printf("\nEnter N:");
    scanf("%d", &n);
    patternCap(n);
    patternSmall(n);
    patternCapAlternate(n);
    patternSmallAlternate(n);
    printf("\nEnter a character : ");
    ch = getch();
    printf("\nEnter N:");
    scanf("%d", &n);
    printf("\nEntered character is: %c");
    patternCapOrSmallWithCharIn(n, ch);
}
void patternCap(int n)
{
    printf("\nCapital Pattern\n");
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        printf("%c", ch++);
    }
}
void patternCapOrSmallWithCharIn(int n, char ch)
{
    printf("\nPattern with char input\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c", ch++);
    }
}
void patternSmall(int n)
{
    printf("\nSmall Pattern\n");
    char ch = 'a';
    for (int i = 0; i < n; i++)
    {
        printf("%c", ch++);
    }
}
void patternSmallAlternate(int n)
{
    printf("\nSmall Pattern Alternate\n");
    char ch = 'a';
    for (int i = 0; i < n; i++)
    {
        printf("%c", ch++);
        ++ch;
    }
}
void patternCapAlternate(int n)
{
    printf("\nCapital Pattern Alternate\n");
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        printf("%c", ch++);
        ++ch;
    }
}