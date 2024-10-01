#include <stdio.h>
void arrayInput(int[], int);
void ascSortArray(int[], int);
void desSortingArray(int[], int);
// void sortingArray(int[], int);
void main()
{
    int size, key;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    arrayInput(arr, size);
    // sortingArray(arr, size);
    ascSortArray(arr, size);
    desSortingArray(arr, size);
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\t %d", arr[i]);
    }
}

void ascSortArray(int arr[], int size)
{
    printf("\n Original array : ");
    printArray(arr, size);
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
    printf("\n AscSorted array : ");
    printArray(arr, size);
}

void desSortingArray(int arr[], int size)
{
    printf("\n Original array : ");
    printArray(arr, size);
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n DesSorted array : ");
    printArray(arr, size);
}

// void sortingArray(int arr[], int size)
// {
//     printf("\n Original array : ");
//     printArray(arr, size);
//     int temp;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("\n Sorted array : ");
//     printArray(arr, size);
// }