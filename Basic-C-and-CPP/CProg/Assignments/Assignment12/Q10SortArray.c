#include <stdio.h>
#include <stdlib.h>
void arrayInput(int[], int);
void sortingArray(int[], int);
void printArray(int[], int);
void main()
{
    int size;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    int *arr = (int *)malloc(sizeof(int) * size);
    arrayInput(arr, size);
    sortingArray(arr, size);
    free(arr);
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

void sortingArray(int arr[], int size)
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
    printf("\n Sorted array : ");
    printArray(arr, size);
}