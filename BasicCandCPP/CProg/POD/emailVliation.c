#include <stdio.h>
#include <string.h>
void validateEmail(char[]);
void main()
{
    char email[20];
    printf("Enter Your email address\n");
    gets(email);
    validateEmail(email);
}
void validateEmail(char email[])
{
    printf("\nValidation process started");
    int length = strlen(email) - 1;
    // char *atRes = ;
    int indexOfAt = strchr(email, '@') - email;
    // char *dotRes = ;
    int indexOfDot = strchr(email, '.') - email;
    // char *spaeRes = strchr(email, ' ');
    // int indexOfSpace = spaeRes - email;
    int domainDiff = (length - indexOfDot);
    int atDotDiff = indexOfDot - indexOfAt;

    if (strchr(email, ' ') || strchr(email, ',') || strchr(email, '/') || strchr(email, '#') || strchr(email, '*') || strchr(email, '%'))
    {
        printf("\nInavlid Email Address due to unwanted symbols");
    }
    else if (domainDiff < 2)
    {
        printf("\nInavlid Email Address ");
    }
    else if (atDotDiff < 3)
    {
        printf("\nInavlid Email Address ");
    }
    else
    {
        if (length)
        {
            // for (int i = indexOfAt; i <= length; i++)
            for (int i = indexOfDot + 1; i <= length; i++)
            {
                // printf("hello");
                if (email[i] >= '0' && email[i] <= '9')
                {
                    printf(" \nInvalid Email Address");
                    return;
                }
            }
        }
        int temp = indexOfAt;
        int cnt = 1;
        while (temp < length)
        {
            // printf("%d is", temp);
            temp++;
            if (email[temp] == '@')
            {
                cnt++;
                break;
            }
        }
        if (cnt > 1)
        {
            printf("\nInvalid Email address.");
            return;
        }

        // if (length)
        // {
        //     for (int i = 0; i <= length; i++)
        //     {
        //         if (email[i] >= 'A' && email[i] <= 'Z')
        //         {
        //             printf(" \nCapital letters not allowed");
        //             return;
        //         }
        //     }
        // }
        printf("\nEmail validation Successful!");
    }

    // printf("\n Length of email : %u", length);
    // printf("\n @ symbol location: %d", atRes);
    // printf("\n Index of @ symbol: %d", indexOfAt);
    // printf("\n . symbol location: %d", dotRes);
    // printf("\n Index of . symbol: %d", indexOfDot);
    // printf("\n space symbol location: %d", spaeRes);
    // printf("\n %d is domain and dot difference", domainDiff);
    // printf("\n %d is At and dot difference", atDotDiff);
    // printf("\n Index of space symbol: %d", indexOfSpace);
}