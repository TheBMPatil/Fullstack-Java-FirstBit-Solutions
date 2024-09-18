#include <stdio.h>
#include <stdlib.h>
void arrayInput(int[], int);
// int sumOfEle(int[], int);
void sumOfArrays(int[], int[], int);
void printArray(int[], int);

void main()
{
    int size1, size2;
    printf("Please enter the size of array1 : ");
    scanf("%d", &size1);
    printf("Please enter the size of arra2 : ");
    scanf("%d", &size2);
    int *arr1 = (int *)malloc(sizeof(int) * size1);
    int *arr2 = (int *)malloc(sizeof(int) * size2);
    printf("\nEnter data for array 1 :");
    arrayInput(arr1, size1);
    printf("\nEnter data for array 2:");
    arrayInput(arr2, size2);
    printf("\nSum of both arrays is :");
    sumOfArrays(arr1, arr2, size1);
    free(arr1);
    free(arr2);
}
// int sumOfEle(int arr[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}
void sumOfArrays(int arr1[], int arr2[], int size)
{
    int sumArray[size];
    for (int i = 0; i < size; i++)
    {
        sumArray[i] = arr1[i] + arr2[i];
    }
    printArray(sumArray, size);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\t %d", arr[i]);
    }
}
void sumOfSecondSmall(int arr1[], int arr2[])
{
    int size1 = ((sizeof(arr1)) / sizeof(arr1[0]));
    int size2 = ((sizeof(arr2)) / sizeof(arr2[0]));
    if (size1 > size2)
    {
        int sumOfArray[size1];
        for (int i = 0; i < size1; i++)
        {
        }
    }
    else
    {
        int sumOfArray[size2];
    }
}