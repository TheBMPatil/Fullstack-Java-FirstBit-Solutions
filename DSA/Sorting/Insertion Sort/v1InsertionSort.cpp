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

void insertionSort(int *arr, int size)
{
    cout << "\nInside Insertion Sort ";
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        for (; j >= 0 && arr[j] > current; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = current;
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

    insertionSort(arr, size);
    cout << "\nArray After Sorting : ";
    displayArray(arr, size);
    return 0;
}