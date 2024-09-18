#include <stdio.h>
int noOfVowelsInSTR(char[]);
void main()
{
    char str[50];
    printf("\nEnter A string :");
    gets(str);
    printf("\nNo Of Vowels in string are :%d", noOfVowelsInSTR(str));
}
int noOfVowelsInSTR(char str[])
{
    int cnt = 0, i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cnt++;
        }
        i++;
    }

    return cnt;
}