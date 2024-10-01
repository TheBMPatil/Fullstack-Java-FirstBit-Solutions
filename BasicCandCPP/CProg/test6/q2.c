
#include <stdio.h>
void find_two_max(int[], int);
void storeArray(int[], int);
void main()
{
    int size;
    printf("Enter size for array:");
    scanf("%d", &size);
    int arr[size];
    storeArray(arr, size);
    find_two_max(arr, size);
}

void storeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d Element:", i + 1);
        scanf("%d", &arr[i]);
    }
}

void find_two_max(int arr[], int s)
{
    int max = arr[0], idx = 0;
    for (int i = 1; i < s; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            idx = i;
        }
    }
    int secondMax = 0;
    for (int i = 1; i < s; i++)
    {
        if (i == idx)
        {
            continue;
        }
        else if (arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }
    printf("\nFirstMax: %d", max);
    printf("\nSecondMax: %d", secondMax);
}