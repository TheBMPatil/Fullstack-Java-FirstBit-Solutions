#include <stdio.h>
#include <string.h>
int noOfVowels(char[]);
int noOfConsonants(char[]);
int noOfSpaces(char[]);
int noOfDigits(char[]);

void main()
{
    int ch;
    printf("\nEnter Your String:\n");
    char str[250];
    fflush(stdin);
    // scanf("%s", &str);
    gets(str);
    printf("\nLength : %d", strlen(str));
    do
    {
        printf("\nEnter Your Choice :\n1)Count The No of Vowels. \t2)Count No of Consonants \n3)No of Spaces \t4)No of Digits in String: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nNo of vowels in string are: %d", noOfVowels(str));
            break;
        case 2:
            printf("\nNo of Consonants in string are: %d", noOfConsonants(str));
            break;
        case 3:
            printf("\nNo of Spaces in string are: %d", noOfSpaces(str));
            break;
        case 4:
            printf("\nNo of Digits in string are: %d", noOfDigits(str));
            break;
        case 0:
            printf("\nExiting..");
            break;
        default:
            printf("\nInvalid Choice!!");
            break;
        }
    } while (ch != 0);
}
int noOfVowels(char str[])
{
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            cnt++;
        }
    }
    return cnt;
}

int noOfConsonants(char str[])
{
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        // if ((str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u' || str[i] != 'A' || str[i] != 'E' || str[i] != 'I' || str[i] != 'O' || str[i] != 'U'))
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            continue;
        }
        else if ((str[i] >= '0' && str[i] <= '9') == 0 && str[i] != ' ')
        {
            cnt++;
        }
    }
    return cnt;
}

int noOfSpaces(char str[])
{
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            cnt++;
        }
    }
    return cnt;
}
int noOfDigits(char str[])
{
    int cnt = 0;
    // int len = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    // for (int i = 0; i <= len; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            cnt++;
        }
    }
    return cnt;
}