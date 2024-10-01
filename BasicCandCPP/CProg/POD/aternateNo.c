#include <stdio.h>
void rearrange(int[], int);
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    rearrange(arr, n);

    printf("Rearranged array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void rearrange(int arr[], int n)
{
    int temp[n];
    int left = 0;
    int right = n - 1;
    int i = 0;

    while (left <= right)
    {
        if (i % 2 == 0)
        {
            temp[i] = arr[right];
            right--;
        }
        else
        {
            temp[i] = arr[left];
            left++;
        }
        i++;
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}