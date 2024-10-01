#include <stdio.h>
int minOfArray(int[], int);
int maxOfArray(int[], int);
void arrayInput(int[], int);

void main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    arrayInput(arr, size);
    printf("\n%d : is minimum of given array.", minOfArray(arr, size));
    printf("\n%d : is maximum of given array.", maxOfArray(arr, size));
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}

int minOfArray(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
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