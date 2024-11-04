#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int cols = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Condition to print * in the required "X" pattern
            if (i == 0 || i == rows - 1 || i == j || i + j == rows - 1 || j == 0 || j == cols - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " "; // Leave spaces where * shouldn't be
            }
            cout << "    "; // Add consistent spacing between columns
        }
        cout << endl;
    }

    return 0;
}
