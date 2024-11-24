#include <iostream>
using namespace std;

void store(int **arr, int rows, int cols) {
    cout << "Enter elements in the matrix: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}

void display(int **arr, int rows, int cols) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

int** createMatrix(int rows, int cols) {
    int **matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols]();
    }
    return matrix;
}

void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void addMatrices(int **arr, int **brr, int rows, int cols) {
    int **result = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr[i][j] + brr[i][j];
        }
    }
    cout << "Addition Result:\n";
    display(result, rows, cols);
    freeMatrix(result, rows);
}

void subtractMatrices(int **arr, int **brr, int rows, int cols) {
    int **result = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr[i][j] - brr[i][j];
        }
    }
    cout << "Subtraction Result:\n";
    display(result, rows, cols);
    freeMatrix(result, rows);
}

void transposeMatrix(int **arr, int rows, int cols) {
    int **transpose = createMatrix(cols, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << "Transpose of the Matrix:\n";
    display(transpose, cols, rows);
    freeMatrix(transpose, cols);
}

void multiplyMatrices(int **A, int **B, int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        cout << "Matrix multiplication not possible.\n";
        return;
    }

    int **result = createMatrix(r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Multiplication Result:\n";
    display(result, r1, c2);
    freeMatrix(result, r1);
}

int main() {
    int choice;
    do {
        cout << "\n--- 2D Array Operations ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Transpose\n";
        cout << "4. Multiplication\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            int rows, cols, r2, c2;
            int **A, **B;

            switch (choice) {
                case 1:
                case 2: 
                    cout << "Enter rows and columns for both matrices: ";
                    cin >> rows >> cols;
                    A = createMatrix(rows, cols);
                    B = createMatrix(rows, cols);
                    store(A, rows, cols);
                    store(B, rows, cols);
                    display(A, rows, cols);
                    display(B, rows, cols);
                    if (choice == 1) addMatrices(A, B, rows, cols);
                    else subtractMatrices(A, B, rows, cols);
                    freeMatrix(A, rows);
                    freeMatrix(B, rows);
                    break;

                case 3: 
                    cout << "Enter rows and columns of the matrix: ";
                    cin >> rows >> cols;
                    A = createMatrix(rows, cols);
                    store(A, rows, cols);
                    display(A, rows, cols);
                    transposeMatrix(A, rows, cols);
                    freeMatrix(A, rows);
                    break;

                case 4: 
                    cout << "Enter rows and columns for Matrix A: ";
                    cin >> rows >> cols;
                    cout << "Enter rows and columns for Matrix B: ";
                    cin >> r2 >> c2;
                    A = createMatrix(rows, cols);
                    B = createMatrix(r2, c2);
                    store(A, rows, cols);
                    store(B, r2, c2);
                    display(A, rows, cols);
                    display(B, r2, c2);
                    multiplyMatrices(A, B, rows, cols, r2, c2);
                    freeMatrix(A, rows);
                    freeMatrix(B, r2);
                    break;
            }
        } else if (choice != 0) {
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    cout << "Exiting program. Goodbye!\n";
    return 0;
}
