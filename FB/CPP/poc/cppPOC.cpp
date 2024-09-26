#include <stdio.h>
int main()
{
    printf("Namaste Duniya..!\n");
    // int *arr = new int[10]; // Dynamic allocation
    int arr[10]; // Static array

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 21;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    delete arr;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}