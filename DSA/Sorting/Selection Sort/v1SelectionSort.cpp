#include <bits/stdc++.h>
using namespace std;
void swap(int *num1, int *num2)
{
    cout << "\nUnswap Num1= " << *num1 << "\tNum2 =" << *num2;
    *num1 = *num1 + *num2;
    cout << "\n 1 > Swap Num1= " << *num1 << "\tNum2 =" << *num2;
    *num2 = *num1 - *num2;
    cout << "\n 2 > Swap Num1= " << *num1 << "\tNum2 =" << *num2;
    *num1 = *num1 - *num2;
    cout << "\n Swap Num1= " << *num1 << "\tNum2 =" << *num2;
}

void getArray(int *arr, int &size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter Ele No " << i + 1 << " :";
        cin >> arr[i];
    }
}

void displayArray(int *arr, int &size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void selectionSort(int *arr, int size)
{
    cout << "\nInside Selection Sort ";
    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i];
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                index = j;
                // swap(arr[i], arr[j]);
            }
        }
        swap(&arr[index], &arr[i]);
        // arr[index] = arr[i];
        // arr[i] = min;
    }
}

int main()
{
    int size = 0;
    cout << "Enter Size Of array : ";
    cin >> size;
    int arr[size];
    cout << "\nEnter " << size << " Elements Of array : ";
    getArray(arr, size);
    cout << "\nArray Before Sorting : ";
    displayArray(arr, size);

    selectionSort(arr, size);
    cout << "\nArray After Sorting : ";
    displayArray(arr, size);
    return 0;
}