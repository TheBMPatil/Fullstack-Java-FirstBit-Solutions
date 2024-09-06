#include <stdio.h>
int secondMaxOfArray(int[], int);
void arrayInput(int[], int);
void sortingArray(int[], int);
void displayArray(int[], int);
int maxOfArray(int[], int);

void main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    arrayInput(arr, size);

    printf("\n%d : is Second maximum of given array.", secondMaxOfArray(arr, size));
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}

int secondMaxOfArray(int arr[], int size)
{
    // sortingArray(arr, size);
    int max = maxOfArray(arr, size);
    printf("%d max", max);
    int sMax = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (sMax < arr[i] && arr[i] < max && sMax < max)
        {
            sMax = arr[i];
        }
    }

    return sMax;

    // return arr[size - 2];
}
int maxOfArray(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void sortingArray(int arr[], int size)
{
    printf("\n Original array : ");
    displayArray(arr, size);
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
