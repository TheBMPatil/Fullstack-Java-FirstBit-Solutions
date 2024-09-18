#include <stdio.h>
void printCommon(int[], int[], int, int);
void main()
{
    int size1, size2;
    printf("Enter size for array1:");
    scanf("%d", &size1);
    printf("Enter size for array2:");
    scanf("%d", &size2);
    int arr1[size1], arr2[size2];
    storeArray(arr1, size1);
    storeArray(arr2, size2);
    printCommon(arr1, arr2, size1, size2);
}
void storeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d Element:", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printCommon(int arr1[], int arr2[], int s1, int s2)
{
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d  ", arr1[i]);
            }
        }
    }
}