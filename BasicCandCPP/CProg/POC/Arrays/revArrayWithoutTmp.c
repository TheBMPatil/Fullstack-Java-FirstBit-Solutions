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

    reverseArray(arr, size);
}

void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < (size) / 2; i++)
    {
        arr[i] = arr[i] + arr[size - (i + 1)];
        arr[size - (i + 1)] = arr[i] - arr[size - (i + 1)];
        arr[i] = arr[i] - arr[size - (i + 1)];
        // temp = arr[i];
        // arr[i] = arr[size - (i + 1)];
        // arr[size - (i + 1)] = temp;
    }
    printf("\nAfter Rev array :");
    for (int i = 0; i < size; i++)
    {
        printf("\t %d", arr[i]);
    }
}