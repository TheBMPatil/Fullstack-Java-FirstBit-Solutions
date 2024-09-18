#include <stdio.h>
#include <stdlib.h>
void arrayInput(int[], int);
// void searchInArray(int[], int, int);
int searchInArray(int[], int, int);
void main()
{
    int size, key;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    int *arr = (int *)malloc(sizeof(int) * size);
    arrayInput(arr, size);
    printf("\n Enter element to be searched: ");
    scanf("%d", &key);
    int x = searchInArray(arr, size, key);
    if (x >= 0)
    {
        printf("\n Key %d fount at index %d", key, x);
    }
    else
    {
        printf("\n Key %d not fount", key);
    }
    free(arr);
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}
int searchInArray(int arr[], int size, int key)
{
    int status = 0, i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    // printf("\n Key %d is not in array", key);
    return -1;
}
// void searchInArray(int arr[], int size, int key)
// {
//     int status = 0, i;
//     for (i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             status = 1;
//             break;
//         }
//     }
//     if (status == 1)
//     {
//         printf("\n Key %d fount at index %d", key, i);
//     }
//     else
//     {
//         printf("\n Key %d is not in array", key);
//     }
// }
