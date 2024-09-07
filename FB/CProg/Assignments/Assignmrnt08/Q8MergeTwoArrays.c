#include <stdio.h>
void arrayInput(int[], int);
void mergeArrays(int[], int[], int, int);
void printArray(int[], int);

void main()
{
    int size1, size2;
    printf("Please enter the size of array1 : ");
    scanf("%d", &size1);
    printf("Please enter the size of arra2 : ");
    scanf("%d", &size2);
    int arr1[size1], arr2[size2];
    printf("\nEnter data for array 1 :");
    arrayInput(arr1, size1);
    printf("\nEnter data for array 2:");
    arrayInput(arr2, size2);
    printf("\n Merged arrays is :");
    mergeArrays(arr1, arr2, size1, size2);
}

void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}

void mergeArrays(int arr1[], int arr2[], int s1, int s2)
{
    int newArray[s1 + s2];
    int j = 0, i;
    for (i = 0; i < s1; i++)
    {
        newArray[i] = arr1[i];
    }
    for (j = 0; j < s2; j++, i++)
    {
        newArray[i] = arr2[j];
    }
    // printf("\ni = %d", i);
    // printf("\nj = %d \n", j);
    printArray(newArray, (s1 + s2));
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\t %d", arr[i]);
    }
}
