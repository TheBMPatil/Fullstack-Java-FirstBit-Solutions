#include <iostream>
using namespace std;

int main()
{
    int rows = 9; // Adjusted to fit the vertical spread of the pattern
    int cols = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Condition to print * in the required "X" pattern
            if (j == i || j == cols - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            cout << "    "; // Add spacing between columns
        }
        cout << endl;
    }

    return 0;
}
