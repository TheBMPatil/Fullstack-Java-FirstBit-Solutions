#include <stdio.h>
void arrayInput(int[], int);
void printAlternateArray(int[], int);
void main()
{
    int size;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    arrayInput(arr, size);
    printAlternateArray(arr, size);
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}
void printAlternateArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        printf("\t %d", arr[i]);
    }
}