#include <bits/stdc++.h>
using namespace std;
void swap(int &num1, int &num2)
{
    // cout << "\nUnswap Num1= " << num1 << "\tNum2 =" << num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    // cout << "\n Swap Num1= " << num1 << "\tNum2 =" << num2;
}
void bubbleSort(int *arr, int &size)
{
    // cout << "\nSize : " << size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // if (arr[i] > arr[j])
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
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

    bubbleSort(arr, size);
    cout << "\nArray After Sorting : ";
    displayArray(arr, size);
    return 0;
}