#include <stdio.h>
void main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    for (int i = 1; i < 7; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
        printf("\t%d", arr[i]);
    }
}