#include <stdio.h>
int noOfWords(char[]);
void main()
{
    char str[50];
    int n;
    printf("\nEnter A string :");
    gets(str);
    printf("\nNo of words in string are: %d", noOfWords(str));
}
int noOfWords(char str[])
{
    int cnt = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            cnt++;
            // printf("\n%d Count ", cnt);
        }
    }
    // printf("\n%d Count ", cnt);
    return cnt;
}