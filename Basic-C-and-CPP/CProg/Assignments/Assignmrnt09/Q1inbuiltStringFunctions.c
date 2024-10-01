#include <stdio.h>
#include <string.h>
void showMenu();

void main()
{
    char str1[50], str2[50];
    int ch = 50;
    printf("{||--- String functions ---||}\n");

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
            printf("\n%d: is length of your String.", strlen(str1));
            break;
            // Copy
        case 2:
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\n%s: Copied in str2", strcpy(str2, str1));
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
            printf("\n%s: is Concated string.", strcat(str1, str2));
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
            if (strcmp(str1, str2))
            {
                printf("\nStrings are not Equal.");
            }
            else
            {
                printf("\nStrings are Equal.");
            }

            break;
            // Chr search
        case 5:
            printf("\nEnter A String:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter A Character you want to search in array:");
            char chr = getch();
            x = strchr(str1, chr);
            if (x != "NULL")
            {
                printf("\nCharacter %c Found at index %d ", chr, x - str1);
            }
            else
            {
                printf("\n Character not found in string.");
            }

            break;
            // Last occr of char in string
        case 6:
            printf("\nEnter A String:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter A Character you want to search in array Last occurance:");
            chr = getch();
            x = strrchr(str1, chr);
            if (x != "NULL")
            {
                printf("\nCharacter %c Found at index %d ", chr, x - str1);
            }
            else
            {
                printf("\nCharacter not found in string.");
            }
            break;
            // search substring
        case 7:
            printf("\nEnter A String:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter A SubString you want to search in array:");
            scanf("%s", str2);

            x = strstr(str1, str2);
            if (x != "NULL")
            {
                printf("\nSubstring : %s Found at index :%d ", str2, x - str1);
            }
            else
            {
                printf("\nSubstring not found in string.");
            }
            break;
            // Reverse
        case 8:
            printf("\nEnter a string :");
            scanf("%s", &str1);
            printf("\n%s : is reverse.", strrev(str1));
            break;
            // Duplicate
        case 9:
            printf("\nEnter a string :");
            scanf("%s", &str1);
            printf("\n%s : is Duplicate string.", strdup(str1));
            printf("\n%u : is Address of Duplicate string.", strdup(str1));
            printf("\n%u : is Address of Oringinal string.", (str1));
            break;
            // NCpy
        case 10:
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter how many chars do you want to copy: ");
            scanf("%d", &n);
            printf("\n%s: Copied in str2", strncpy(str2, str1, n));
            break;
        case 11:
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            for (int i = 0; str1[i] != '\0'; i++)
            {
                str1[i] = tolower(str1[i]);
            }
            printf("%s to Lower Function.", str1);
            break;
        case 12:
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            for (int i = 0; str1[i] != '\0'; i++)
            {
                str1[i] = toupper(str1[i]);
            }
            printf("%s to Upper Function.", str1);
            break;
        case 13:
            printf("\nTo compare two strings STRCOLL:");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter String 2:");
            fflush(stdin);
            scanf("%s", str2);
            if (strcoll(str1, str2))
            {
                printf("\nStrings are not Equal.");
            }
            else
            {
                printf("\nStrings are Equal.");
            }
            break;
        case 14:
            // input string = "abc123xyz"  delim = "abc"
            printf("\nSTRSPN:");
            printf("\nEnter String :");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter Delimeter:");
            fflush(stdin);
            scanf("%s", str2);
            size_t res = strspn(str1, str2);
            // printf("\nStrings are Equal.");
            printf("\nResult: %zu", res);
            break;
        case 15:
            //  str ="hello123world" delim="1234567890";
            printf("\nString strpbrk:");
            printf("\nEnter String :");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter Delimeter:");
            fflush(stdin);
            scanf("%s", str2);
            char *result = strpbrk(str1, str2);
            if (result)
            {
                printf("First match found: '%c'\n", *result);
            }
            else
            {
                printf("No match found.\n");
            }

            break;
        case 16:
            // string : "Hello,world,this,is,C" tolken  : ","
            printf("\nString Tokenization:");
            printf("\nEnter String :");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter Delimeter:");
            fflush(stdin);
            scanf("%s", str2);
            char *token = strtok(str1, str2);
            while (token != NULL)
            {
                printf("Token: %s\n", token);
                token = strtok(NULL, str2);
            }

            break;

        case 17:
            printf("\nCompare strings LengthWise ");
            printf("\nEnter String 1:");
            fflush(stdin);
            scanf("%s", str1);
            printf("\nEnter String 2:");
            fflush(stdin);
            scanf("%s", str2);
            if (strcmpi(str1, str2))
            {
                printf("\nStrings are not Equal.");
            }
            else
            {
                printf("\nStrings are Equal.");
            }
            break;

        default:
            printf("\nInvalid Choice!!!");
            break;
        }
    }
}
void showMenu()
{
    printf("\n\t{||--- MENU ---||}\n");
    printf("\n0)  Exit");
    printf("\n1)  Calculate Length of string.\t2)  Copy into other string.\t3)  Concat two strings.\n4)  Compare two strings.\t5)  Search character in string.\t6)  Search chrs Last occurance in string.\n7)  Search substring in string.\t8)  Reverse the string.\t9) Duplicate String.\n10) Copy N num of chars from string to another.\t11) Conver into lower case\t12) Conver into Upper case.\n13) Compare two strings STRCOLL.\t14) STRSPN \t15) STRPBRK\n16) String Tokenization \t 17) Compare strings LengthWise");
}