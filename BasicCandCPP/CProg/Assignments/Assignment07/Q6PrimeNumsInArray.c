#include <stdio.h>
void arrayInput(int[], int);
void printPrimeArray(int[], int);
int isPrime(int);
void main()
{
    int size;
    printf("Please enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    arrayInput(arr, size);
    printPrimeArray(arr, size);
}
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter %d element :", i + 1);
        scanf("%d", &(arr[i]));
    }
}
void printPrimeArray(int arr[], int size)
{
    printf("\nPrime Numbers from array are :");
    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("\t %d", arr[i]);
        }
    }
}
int isPrime(int num)
{
    int i = 2, cnt = 0;
    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}