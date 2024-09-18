#include <stdio.h>
#include <stdlib.h>
void arrayInput(int[], int);
int sumOfEle(int[], int);
void main()
{
    int size, key;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    int *arr = (int *)malloc(sizeof(int) * size);
    arrayInput(arr, size);
    printf("\n%d is sum of all elements in array.", sumOfEle(arr, size));

    free(arr);
}
int sumOfEle(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}