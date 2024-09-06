#include <stdio.h>
void storeArray(int[], int);
void displayArray(int[], int);

void main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    storeArray(arr, size);
    displayArray(arr, size);
}

void storeArray(int arr[], int size)
{
    printf("Store array function \n");
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}

void displayArray(int arr[], int size)
{
    printf("Display array function \n");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n");
}