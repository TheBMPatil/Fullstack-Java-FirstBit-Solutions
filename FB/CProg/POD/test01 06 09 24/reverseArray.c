#include <stdio.h>
void arrayIn(int[], int);
void arrayOut(int[], int);
void arrayRev(int[], int);
void main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d", &size);
    int arr[size];
    arrayIn(arr, size);
    printf("\nBefore Reverse : ");
    arrayOut(arr, size);
    arrayRev(arr, size);
    printf("\nAfter Reverse : ");
    arrayOut(arr, size);
}
void arrayIn(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("Enter %d element :", i + 1);
        scanf("%d", &arr[i]);
    }
}
void arrayOut(int arr[], int s)
{
    printf("\nArray Elements are:");
    for (int i = 0; i < s; i++)
    {
        printf("\t%d", arr[i]);
    }
}
void arrayRev(int arr[], int s)
{
    for (int i = 0; i < (s / 2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[(s - i) - 1];
        arr[(s - i) - 1] = temp;
    }
}