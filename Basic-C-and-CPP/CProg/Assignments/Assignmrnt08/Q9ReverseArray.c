#include <stdio.h>
void arrayInput(int[], int);
void main()
{
    int size;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    arrayInput(arr, size);
    reverseArray(arr, size);
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
    printArray(arr, size);
}