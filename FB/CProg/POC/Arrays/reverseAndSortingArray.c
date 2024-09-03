#include <stdio.h>
void sortingArray(int[], int);
void main()
{
    int size;
    printf("Enter the size of data:");
    scanf("%d", &size);
    int arr[size];
    // Array input
    printf("\nStore data in array:");
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %dth Element:", i + 1);
        scanf("%d", &arr[i]);
    }
    // noramal array print
    printf("\n Printing normal array:");
    for (int i = 0; i < size; i++)
    {
        printf("\t %d", arr[i]);
    }

    // printing in rev order using loop
    printf("\n Printing reverse of array:");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("\t %d", arr[i]);
    }
    // sorting array
    sortingArray(arr, size);
    // using rev function
    reverseArray(arr, size);
}

void sortingArray(int arr[], int size)
{
    // printf("\n Inside sort fun");
    printf("\n Original array : ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n Sorted array : ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
}
void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < (size) / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - (i + 1)];
        arr[size - (i + 1)] = temp;
    }
    printf("\nAfter Rev array :");
    for (int i = 0; i < size; i++)
    {
        printf("\t %d", arr[i]);
    }
}