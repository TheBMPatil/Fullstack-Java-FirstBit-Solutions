#include <stdio.h>
//    1 mystrcpy    -done
// b  2 mystrlen    -done
// c. 3 mystrcmp    -done
// d. 4 mystrcat    -done
// e. 5 mystrncpy   -done
// f. 6 mystrupper  -done
// g. 7 mystrlower  -done
// h. 8 mystrrev    -done
// i.9 mystrstr     -done
// j.10 mystrcasecmp-done
// k.11 mystrchr    -done
// l.12 mystrrchr   -done
// m.13 mystrncmp   -done
// n.14 mystrnstr   -done
// o.15 mystrncat   -done
// p.16 mystrncasecmp-done

void showMenu();
char *myStrCpy(char *, char[]);         // 1
int myStrLen(char[]);                   // 2
int myStrCmp(char[], char[]);           // 3
char *myStrCat(char[], char[]);         // 4
char *myStrNCpy(char *, char[], int);   // 5
char *myStrUpper(char *);               // 6
char *myStrLower(char[]);               // 7
char *myStrRev(char[]);                 // 8
char *myStrStr(char[], char[]);         // 9
int myStrCASECmp(char[], char[]);       // 10
char *myStrChr(char[], char);           // 11
char *myStrRChr(char[], char);          // 12
int myStrnCmp(char[], char[], int);     // 13
char *myStrNStr(char[], char[]);        // 14
char *myStrNCat(char[], char[], int);   // 15
int myStrNCASECmp(char[], char[], int); // 16
void main()
{
    char str1[50], str2[50];
    int ch = 50;

    while (ch)
    {
        showMenu();
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        char chr;
        char *x;
        int n;
        // Switching On Different choices
        switch (ch)
        {
        case 0:
            break;
            // length
        case 1:
            printf("\nEnter A String:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\n%d: is length of your String.", myStrLen(str1));
            break;
            // Copy
        case 2:
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\n%s: Copied in str2", myStrCpy(str2, str1));
            break;
            // concat
        case 3:
            printf("\nTo concat two strings:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter String 2:");
            fflush(stdin);
            scanf("%s", str2);
            printf("\n%s: is Concated string.", myStrCat(str1, str2));
            break;
            // compare
        case 4:

            printf("\nTo compare two strings:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter String 2:");
            fflush(stdin);
            scanf("%s", str2);
            if (myStrCmp(str1, str2))
            {
                printf("\nStrings are not Equal.");
            }
            else
            {
                printf("\nStrings are Equal.");
            }

            break;

        case 5:
            // str ncpy
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            int n;
            printf("\nEnter number of chars you want to copy in string 2: ");
            scanf("%d", &n);
            char str3[50];
            printf("\n%s: Copied in str2", myStrNCpy(str3, str1, n));
            break;

            // ToUpper
        case 6:
            printf("\nConvert your string in capital:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\n%s: Your string in allCap", myStrUpper(str1));
            break;

        case 7:
            // LowerCase
            printf("\nConvert your string in Lowercase:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\n%s: Your string in lower Case", myStrLower(str1));
            break;

        case 8:
            // Reverses
            printf("\nReverse The string:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\n%s: Reverse Result", myStrRev(str1));
            break;

        case 9:
            printf("\nSearch Substring in string:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter SubStr:");
            fflush(stdin);
            scanf("%s", str2);
            x = myStrStr(str1, str2);
            if (x)
            {
                printf("\nSubstring %s Found at index :%d", str2, x - str1);
            }
            else
            {
                printf("\nSubstring Not found.");
            }
            break;
        case 10:
            printf("\nTo compare two strings CASECMP:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter String 2:");
            fflush(stdin);
            scanf("%s", str2);
            if (myStrCASECmp(str1, str2))
            {
                printf("\nStrings are not Equal.");
            }
            else
            {
                printf("\nStrings are Equal.");
            }
            break;
        case 11:
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            // char ch;
            printf("\nEnter  Char you want to search in String First Occurance: ");
            fflush(stdin);
            scanf("%c", &chr);
            x = myStrChr(str1, chr);
            // printf("\n%u is string base address:", str1);
            // printf("\n%u is returned address:", x);
            if (x)
            {
                printf("\nChar %c Found at index :%d", chr, x - str1);
            }
            else
            {
                printf("\nCharacter Not found.");
            }
            break;
        case 12:
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);

            printf("\nEnter  Char you want to search in String LAST Occurance: ");
            fflush(stdin);
            scanf("%c", &chr);
            x = myStrRChr(str1, chr);
            if (x)
            {
                printf("\nChar %c Found at index :%d", chr, x - str1);
            }
            else
            {
                printf("\nCharacter Not found.");
            }
            break;
        case 13:
            printf("\nTo compare two strings:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter String 2:");
            fflush(stdin);
            scanf("%s", str2);
            printf("\nEnter no of chars you want to compare:");
            scanf("%d", &n);
            if (myStrnCmp(str1, str2, n))
            {
                printf("\nStrings are not Equal.");
            }
            else
            {
                printf("\nStrings are Equal.");
            }
            break;
        case 14:
            printf("\nSearch Substring in string Last Occurance:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter SubStr:");
            fflush(stdin);
            scanf("%s", str2);
            x = myStrNStr(str1, str2);
            if (x)
            {
                printf("\nSubstring %s Found at index :%d last occurance.", str2, x - str1);
            }
            else
            {
                printf("\nSubstring Not found.");
            }

            break;
        case 15:
            printf("\nTo concat two strings upto n no of chars:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter String 2:");
            fflush(stdin);
            scanf("%s", str2);
            printf("\nEnter no of chars you want to copy:");
            scanf("%d", &n);
            printf("\n%s: is Concated string.", myStrNCat(str1, str2, n));
            break;

        case 16:
            printf("\nTo compare two strings CASECMP:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter String 2:");
            fflush(stdin);
            scanf("%s", str2);
            printf("\nEnter no of chars you want to Compare:");
            scanf("%d", &n);
            if (myStrNCASECmp(str1, str2, n))
            {
                printf("\nStrings are not Equal.");
            }
            else
            {
                printf("\nStrings are Equal.");
            }
            break;

        default:
            printf("\nInvalid Choice broooo!!!!!!!");
            break;
        }
    }
}
char *myStrCpy(char *dest, char *src)
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}

char *myStrNCpy(char dest[], char *src, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

int myStrLen(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;

    return i;
}
int myStrCmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0; // Strings are equal
    }
    else if (str1[i] == '\0')
    {
        return -1; // str1 is smaller (since it's shorter)
    }
    else
    {
        return 1; // str2 is smaller (since it's shorter)
    }
}

char *myStrCat(char str1[], char str2[])
{
    int i, j;
    int len = myStrLen(str1);
    for (i = len, j = 0; str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    return str1;
}
char *myStrNCat(char str1[], char str2[], int N)
{
    int i, j;
    int len = myStrLen(str1);
    for (i = len, j = 0; j < N && str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    return str1;
}

char *myStrUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

char *myStrLower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

char *myStrRev(char str[])
{
    int len = myStrLen(str);
    char temp[20];
    int j = 0;
    for (int i = len - 1; i >= 0; i--, j++)
    {
        temp[j] = str[i];
    }
    temp[j] = '\0';
    int i;
    for (i = 0; temp[i] != '\0'; i++)
    {
        str[i] = temp[i];
    }
    str[i] = '\0';
    return str;
}

char *myStrChr(char str1[], char chr)
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == chr)
        {
            return &str1[i];
        }
    }
    return NULL;
}

char *myStrRChr(char str[], char chr)
{
    for (int i = (myStrLen(str) - 1); i >= 0; i--)
    {
        if (str[i] == chr)
        {
            return &str[i];
        }
    }
    return NULL;
}
int myStrnCmp(char str1[], char str2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
        {
            return str1[i] - str2[i];
        }
    }
    return 0;
}
int myStrCASECmp(char str1[], char str2[])
{
    char tempStr1[256];
    char tempStr2[256];

    myStrCpy(tempStr1, str1);
    myStrCpy(tempStr2, str2);

    char *tempstr11 = myStrLower(tempStr1);
    char *tempstr12 = myStrLower(tempStr2);

    for (int i = 0; tempstr11[i] != '\0' || tempstr12[i] != '\0'; i++)
    {
        if (tempstr11[i] != tempstr12[i])
        {
            return tempstr11[i] - tempstr12[i];
        }
    }
    return 0;
}

int myStrNCASECmp(char str1[], char str2[], int n)
{
    char tempStr1[256];
    char tempStr2[256];

    myStrCpy(tempStr1, str1);
    myStrCpy(tempStr2, str2);

    char *tempstr11 = myStrLower(tempStr1);
    char *tempstr12 = myStrLower(tempStr2);

    for (int i = 0; i < n; i++)
    {
        if (tempstr11[i] == '\0' || tempstr12[i] == '\0')
        {
            return tempstr11[i] - tempstr12[i];
        }
        if (tempstr11[i] != tempstr12[i])
        {
            return tempstr11[i] - tempstr12[i];
        }
    }

    return 0;
}

char *myStrStr(char str[], char substr[])
{
    if (substr[0] == '\0')
    {
        return str;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        int j = 0;
        while (str[i + j] != '\0' && substr[j] != '\0' && str[i + j] == substr[j])
        {
            j++;
        }
        if (substr[j] == '\0')
        {
            return &str[i];
        }
    }
    return NULL;
}

char *myStrNStr(char str[], char substr[])
{

    if (substr[0] == '\0')
    {
        return str;
    }

    char *last_occurrence = NULL;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int j = 0;

        while (str[i + j] != '\0' && substr[j] != '\0' && str[i + j] == substr[j])
        {
            j++;
        }

        if (substr[j] == '\0')
        {
            last_occurrence = &str[i];
        }
    }

    return last_occurrence;
}

void showMenu()
{
    printf("\n\t{||--- MENU ---||}\n");
    printf("\n0)  Exit");
    printf("\n1)  Calculate Length of string.\t2)  Copy into other string.\t3)  Concat two strings.\n4)  Compare two strings.\t5) Copy N no of chars into second string. \t6) Convert to Upper Case.\n7)  Convert to LowerCase \t8)  Reverse the string.\t9) Search Substring in String.\n10)To compare two strings CASECMP. \t11) Search Character first occurance in String \t12) Search Character Last occurance in String.\n13) Compare two strings upto n characters.\t14) Search Substring in String STRNSTR. \t15) Concat n no of characters in string1 from string 2.\n16) String Comparision on basis of case");
}