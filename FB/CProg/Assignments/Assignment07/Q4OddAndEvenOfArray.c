#include <stdio.h>
void arrayInput(int[], int);
void evenNums(int[], int);
void oddNums(int[], int);
void main()
{
    int size, key;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    arrayInput(arr, size);
    evenNums(arr, size);
    oddNums(arr, size);
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}
void evenNums(int arr[], int size)
{
    printf("\n Even Numbers from arrray are : ");
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] % 2) == 0)
        {
            printf("\t%d", arr[i]);
        }
    }
}
void oddNums(int arr[], int size)
{
    printf("\n Odd Numbers from arrray are : ");
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] % 2) != 0)
        {
            printf("\t%d", arr[i]);
        }
    }
}