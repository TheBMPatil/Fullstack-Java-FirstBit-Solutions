#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    double num1, num2;
    char op;
    int x = 1;

    while (x > 0) {
        cout << "Do you want to stop {0 to stop}: ";
        cin >> x;

        try {
            if (x == 0) {
                cout << "Exiting program." << endl;
                break;
            }

            // Prompt user for the first number
            cout << "Enter the first number: ";
            if (!(cin >> num1)) {
                throw "Invalid number entered!";
            }

            // Prompt user for the operator
            cout << "Enter an operator (+, -, *, /): ";
            cin >> op;
            if (op != '+' && op != '-' && op != '*' && op != '/') {
                throw "Invalid operator entered!";
            }

            // Prompt user for the second number
            cout << "Enter the second number: ";
            if (!(cin >> num2)) {
                throw "Invalid number entered!";
            }

            // Perform the calculation
            double result = calculate(num1, num2, op);
            cout << "The result is: " << result << endl;

        } catch (const char *errMsg) {
            cout << "Error: " << errMsg << endl;
           
        } catch (...) {
            cout << "An unknown error occurred." << endl;
        }
    }

    return 0;
}
