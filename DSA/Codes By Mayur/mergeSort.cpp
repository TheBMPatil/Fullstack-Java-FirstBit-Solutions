#include <iostream>
using namespace std;

void merge(int *arr, int si, int mid, int ei)
{
    // creating a temp array to store elements while comparing
    int temp[(ei - si) + 1];

    // creating 3 iterators for 3 array -- left , right, temp
    int i = si;
    int j = mid + 1;
    int k = 0;

    // if both index are valid ( not out of bounce )
    while (i <= mid && j <= ei)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // to check that left array has some elements left

    while (i <= mid)
        temp[k++] = arr[i++];

    // to check that right array has some elements left
    while (j <= ei)
        temp[k++] = arr[j++];

    int x = 0;  // representing temp array
    int y = si; // representing og array

    // copy the temp array to og
    while (x < k)
        arr[y++] = temp[x++];
}

void divide(int *arr, int si, int ei)
{
    // if array contains only single element
    if (si == ei)
        return;

    // mid to divide array in 2 parts
    int mid = (si + ei) / 2;

    divide(arr, si, mid);     // left side divide
    divide(arr, mid + 1, ei); // right side divide

    merge(arr, si, mid, ei); // after dividing both sides array
}

void display(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "\t"
             << arr[i];
    }
}
int main()
{
    // creating the the array

    int arr[4] = {7, 3, 5, 4};

    cout << "before sorting";
    display(arr, 4);

    // calling the divide function(array , start index , end index )
    divide(arr, 0, 4 - 1);

    cout << "\nafter sorting";
    display(arr, 4);
}