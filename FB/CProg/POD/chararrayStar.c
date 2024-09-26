#include <stdio.h>
void displayArray(char[], int);
void main()
{
    char arr[] = {'1', '2', '1', '3', '1', '4', '2', '1', '3'};
    int size = (sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = '*';
            }
        }
    }
    displayArray(arr, size);
}

void displayArray(char arr[], int size)
{
    printf("Display array function \n");
    for (int i = 0; i < size; i++)
    {
        printf("\t%c", arr[i]);
    }
    printf("\n");
}