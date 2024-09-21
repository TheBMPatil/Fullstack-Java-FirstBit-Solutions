#include <stdio.h>

void getFrequency(char[]);
void main()
{
    char arr[100];
    printf("Enter the string:");
    gets(arr);
    // int size = sizeof(arr);
    printf("\nString you have entered : ");
    printf("%s", arr);
    getFrequency(arr);
}

void getFrequency(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        int cnt = 1;
        if (arr[i] != -1)
        {

            for (int j = i + 1; arr[j] != '\0'; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = -1;
                    cnt++;
                }
            }
        }
        else
        {
            continue;
        }
        printf("\n%c -> %d", arr[i], cnt);
    }
}