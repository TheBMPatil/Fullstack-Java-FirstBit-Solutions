#include <bits/stdc++.h>
using namespace std;

int *removeDup(int *arr, int &size) {
    int x = 0; // Counter for unique elements
    int visited[size]; // Array to hold unique elements
    bool isDuplicate;

    for (int i = 0; i < size; i++) {
        isDuplicate = false;
        for (int k = 0; k < x; k++) { // Check if the current element is already in 'visited'
            if (visited[k] == arr[i]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) { // Add to 'visited' if not duplicate
            visited[x] = arr[i];
            x++;
        }
    }

    // Allocate memory for the result array
    int *res = new int[x];
    for (int i = 0; i < x; i++) {
        res[i] = visited[i];
    }
    size = x; // Update size to the number of unique elements
    return res;
}

int main() {
    int size = 7;
    int arr[] = {10, 20, 30, 10, 30, 20, 10};
    int *res = removeDup(arr, size);

    cout << "Array with unique elements: ";
    for (int i = 0; i < size; i++) {
        cout << res[i] << " ";
    }

    cout << "\nSize: " << size << endl;

    delete[] res; // Free allocated memory
    return 0;
}
