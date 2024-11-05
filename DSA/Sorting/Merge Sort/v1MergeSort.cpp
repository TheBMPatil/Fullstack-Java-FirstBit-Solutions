#include <bits/stdc++.h>
using namespace std;

// TC: O(nlogn)
void merge(int *arr, int start, int mid, int end)
{
    cout << "\n\n#########Inside Merge";
    int k = 0, i = start, j = mid + 1;
    int tempSize = (end - start) + 1;
    int merged[tempSize];
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            merged[k++] = arr[i++];
        }
        else
        {
            merged[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        merged[k] = arr[i];
        i++;
        k++;
    }
    while (j <= end)
    {
        merged[k] = arr[j];
        k++;
        j++;
    }

    // for (int i = start, s = 0; i < k; i++, s++) ///Thodasa barabr op :After Sort :Array : 12  20      18      25      85
    for (int i = start, s = 0; s < k; i++, s++)
    {
        arr[i] = merged[s];
        cout << "\n$ :  " << arr[i];
    }
}

void divide(int *arr, int start, int end)
{
    cout << "\n\n##########$$$$$..Inside Divide";
    if (start == end)
    {
        return;
    }

    int mid = (start + end) / 2;
    divide(arr, start, mid);
    divide(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

void displayArray(int *arr, int size)
{
    cout << "Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int size = 5;
    int arr[size] = {25, 12, 85, 20, 18};
    cout << "Original";
    displayArray(arr, size);

    divide(arr, 0, size - 1);

    cout << "\nAfter Sort :";
    displayArray(arr, size);
    return 0;
}