#include <stdio.h>
void arrayInput(int[], int);
int avgOfArray(int[], int);

void main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    arrayInput(arr, size);
    printf("\n%d : is avarage of array.", avgOfArray(arr, size));
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}

int avgOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (sum / size);
}