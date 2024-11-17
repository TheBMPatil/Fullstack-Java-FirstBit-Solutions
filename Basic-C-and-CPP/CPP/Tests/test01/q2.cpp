#include <bits/stdc++.h>
using namespace std;

void storeArray(int *arr, int &size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter ele no : " << i;
        cin >> arr[i];
    }
}
void displayArray(int *arr, int &size)
{

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
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
        // swap(&arr[index], &arr[i]);
        arr[index] = arr[i];
        arr[i] = min;
    }
}

int main()
{
    int size;
    cout << "Enter the Size of array : ";
    cin >> size;
    int arr[size];

    storeArray(arr, size);
    cout << "Original array :";
    displayArray(arr, size);
    selectionSort(arr, size);
    cout << "Sorted array :";
    displayArray(arr, size);
    return 0;
}