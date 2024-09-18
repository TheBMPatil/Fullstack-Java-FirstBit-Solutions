#include <stdio.h>
char *onetoNine(int);
void spellNum(int);
void main()
{
    int num;
    printf("\nEnter a Number :");
    scanf("%d", &num);
    spellNum(num);
}

void spellNum(int n)
{
    if (n <= 9)
    {
        printf("\n%s", onetoNine(n));
    }

    if (n <= 13 && n > 9)
    {
        switch (n)
        {
        case 10:
            printf("\nTen");
            break;
        case 11:
            printf("\nEleven");
            break;
        case 12:
            printf("\nTwelve");
            break;
        case 13:
            printf("\nThirteen");
            break;
        }
    }
    else if (n > 13 && n < 20)
    {
        // printf("\nInside Teen");
        int rem = n % 10;
        printf("\n%steen", onetoNine(rem));
    }
    else if (n >= 20 && n < 30)
    {
        int rem = n % 10;
        printf("\nTwenty%s", onetoNine(rem));
    }
    else if (n >= 30 && n < 40)
    {
        int rem = n % 10;
        printf("\nThirty%s", onetoNine(rem));
    }
    else if (n >= 40 && n < 50)
    {
        int rem = n % 10;
        printf("\nFourty%s", onetoNine(rem));
    }
    else if (n >= 50 && n < 60)
    {
        int rem = n % 10;
        printf("\nFifty%s", onetoNine(rem));
    }
    else if (n >= 60 && n < 70)
    {
        int rem = n % 10;
        printf("\nSixty%s", onetoNine(rem));
    }
    else if (n >= 70 && n < 80)
    {
        int rem = n % 10;
        printf("\nSeventy%s", onetoNine(rem));
    }
    else if (n >= 80 && n < 90)
    {
        int rem = n % 10;
        printf("\nEightty%s", onetoNine(rem));
    }
    else if (n >= 90 && n < 100)
    {
        int rem = n % 10;
        printf("\nNinety%s", onetoNine(rem));
    }
    else if (n == 100)
    {
        printf("\nHundred");
    }
}
char *onetoNine(int n)
{
    switch (n)
    {
    case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6:
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    default:
        return;
    }
}
