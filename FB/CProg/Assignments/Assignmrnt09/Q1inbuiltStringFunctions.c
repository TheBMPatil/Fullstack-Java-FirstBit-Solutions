#include <stdio.h>
#include <string.h>
void showMenu();

void main()
{
    char str1[50], str2[50];
    int ch = 50;
    printf("{||--- String functions ---||}\n");
    printf("Enter A String:");
    gets(str1);

    while (ch)
    {
        showMenu();
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        // Switching On Different choices
        switch (ch)
        {
        case 1:
            printf("\n%d: is length of your String.", strlen(str1));
            break;

        default:
            break;
        }
    }
}
void showMenu()
{
    printf("\n\t{||--- MENU ---||}\n");
    printf("\n0)  Exit");
    printf("\n1)  Calculate Length of string.\t2)  Copy into other string.\t3)  Concat two strings.\n4)  Compare two strings.\t5)  Search character in string.\t6)  Search chrs Last occurance in string.\n7)  Search substring in string.\t8)  Reverse the string.\t9) Duplicate String.\n10) Copy N num of chars from string to another.\t11)\t12)");
    // printf("\n13)\t14)\t15)\n16)\t17)\t18)\n19)\t20)\t21)\n22)\t23)\t24)");
}