#include <stdio.h>
void arrayInput(int[], int);
void rotateArray(int[], int, int);
void displayArray(int[], int);
void main()
{
    printf("Enter the size of array: ");
    int size;
    scanf("%d", &size);
    int arr[size], steps;
    arrayInput(arr, size);
    printf("\n Before rotation array is : ");
    displayArray(arr, size);
    printf("\nHow many steps do you want to rotate ?");
    scanf("%d", &steps);
    rotateArray(arr, steps, size);
    printf("\n After rotation array is : ");
    displayArray(arr, size);
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}
void rotateArray(int arr[], int steps, int size)
{
    while (steps)
    {
        int temp = arr[size - 1];
        for (int j = size; j >= 1; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
        steps--;
    }
    // displayArray(arr, size);
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n");
}
