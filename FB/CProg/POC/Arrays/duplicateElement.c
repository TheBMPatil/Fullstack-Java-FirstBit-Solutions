// #include <stdio.h>
// void arrayInput(int[], int);
// void main()
// {
//     int size;
//     printf("Enter the size of array : ");
//     scanf("%d", &size);
//     int arr[size];
//     arrayInput(arr, size);
//     removeDuplicate(arr, size);
// }
// void arrayInput(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("\n Enter %d element :", i + 1);
//         scanf("%d", &(arr[i]));
//     }
// }

// void removeDuplicate(int arr[], int size)
// {
//     int dup = arr[0];

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 arr[j] = arr[j + 1];
//             }
//         }
//     }
//     printArray(arr, size);
// }
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("\t %d", arr[i]);
//     }
// }

#include <stdio.h>

void arrayInput(int[], int);
int removeDuplicate(int[], int);
void printArray(int[], int);

void main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    arrayInput(arr, size);

    int newSize = removeDuplicate(arr, size);

    printf("Array after removing duplicates:");
    printArray(arr, newSize);
}

void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &(arr[i]));
    }
}

int removeDuplicate(int arr[], int size)
{
    int newSize = size;

    for (int i = 0; i < newSize; i++)
    {
        for (int j = i + 1; j < newSize; j++)
        {
            if (arr[i] == arr[j])
            {
                // Shift elements to the left
                for (int k = j; k < newSize - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                newSize--; // Reduce the size after removing a duplicate
                j--;       // Adjust index to check the shifted element
            }
        }
    }
    return newSize;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n");
}
