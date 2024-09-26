#include <stdio.h>
#include <string.h>
void printRareCount(char *);
void main()
{
    char str[10] = "rare";
    printRareCount(str);
}
void printRareCount(char *str)
{
    char visited[10];
    int vcnt = 0;
    // strcpy(str1, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        int found = 0;
        int count = 1;
        for (int j = 0; visited[j] != '\0'; j++)
        {
            if (str[i] == visited[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            continue;
        }
        else
        {
            for (int j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                }
            }
        }

        printf("%c = %d\n", str[i], count);
        visited[vcnt++] = str[i];
    }
}