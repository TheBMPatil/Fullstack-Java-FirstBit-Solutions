#include <stdio.h>
#include <string.h>
void main()
{
    char str[50]; // str2[50];
    printf("Enter the string:");
    gets(str);
    // printf("Enter the string2:");
    // gets(str2);
    printf("\n %u : is Address of STR1 ", str);
    // duplicate

    char *ptr = strdup(str);
    printf("\n%s is duplicate result.", ptr);
    printf("\n %u : is Address of STR2 ", ptr);
    // char str2[] = strdup(str);
    // printf("\n%s is duplicate result.", str2);
    // printf("\n %u : is Address of STR2 ", str2);

    // STRSTR finding substring
    //  printf("\n %s : is STRSTR result ", strstr(str, str2));
    //  printf("\n %u : is returned Address ", strstr(str, str2));

    // StrCat concatenate
    // printf("\n %s : is concat res ", strcat(str, str2));
    // printf("\n %u : is concat Address ", strcat(str, str2));

    // Strncmp not correct
    // int x = strncmp(str, str2,3);
    // if (x == 0)
    // {
    //     printf("Both strings are equal");
    // }
    // else if (x > 0)
    // {
    //     printf("\nStr1 is bigger.");
    // }
    // else
    // {
    //     printf("\nStr2 is bigger.");
    // }

    // Strcmp
    // int x = strcmp(str, str2);
    // if (x == 0)
    // {
    //     printf("Both strings are equal");
    // }
    // else if (x > 0)
    // {
    //     printf("\nStr1 is bigger.");
    // }
    // else
    // {
    //     printf("\nStr2 is bigger.");
    // }

    // Strlen and strcpy

    // printf("\n%d is lengh of string you have entered!", strlen(str));
    // printf("\n %u address of str1", str);
    // printf("\n %u address of str2", str2);
    // printf("\n %u is returned addres", strcpy(str2, str));
    // printf("\n%s is str2", str2);
}