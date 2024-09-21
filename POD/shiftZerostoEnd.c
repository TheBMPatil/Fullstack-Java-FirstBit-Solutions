#include <stdio.h>
void shiftZeros(int[], int);
void arrayInput(int[], int);
void printArray(int[], int);
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter data of Array :");
    arrayInput(arr, size);
    printf("\nArray you entered is : ");
    printArray(arr, size);
    printf("\nShifting zeros in array:");
    shiftZeros(arr, size);
    printArray(arr, size);
    return 0;
}

void shiftZeros(int arr[], int s)
{
    int temp, j;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == 0)
        {
            for (j = i; j < s; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
        arr[j - 1] = 0;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\t %d", arr[i]);
    }
}

void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}
