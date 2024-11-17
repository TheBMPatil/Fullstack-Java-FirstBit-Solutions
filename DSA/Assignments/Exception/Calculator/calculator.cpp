#include <iostream>
#include <stdexcept>
using namespace std;

// Function to perform the arithmetic operation
double calculate(double num1, double num2, char op)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 == 0)
        {
            throw runtime_error("Error: Division by zero!");
        }
        return num1 / num2;
    default:
        throw invalid_argument("Error: Invalid operator!");
    }
}

int main()
{
    double num1, num2;
    char op;
    int x = 1;
    while (x > 0)
    {
        cout << "Do you want to stop {0 to stop}: ";
        cin >> x;

        try
        {
            // Prompt user for first number
            cout << "Enter the first number: ";
            if (!(cin >> num1))
            {
                throw invalid_argument("Error: Invalid number entered!");
            }

            // Prompt user for the operator
            cout << "Enter an operator (+, -, *, /): ";
            cin >> op;
            if (op != '+' && op != '-' && op != '*' && op != '/')
            {
                throw invalid_argument("Error: Invalid operator entered!");
            }

            // Prompt user for the second number
            cout << "Enter the second number: ";
            if (!(cin >> num2))
            {
                throw invalid_argument("Error: Invalid number entered!");
            }

            // Perform the calculation
            double result = calculate(num1, num2, op);
            cout << "The result is: " << result << endl;
        }
        catch (const invalid_argument &e)
        {
            cout << e.what() << endl;
        }
        catch (const runtime_error &e)
        {
            cout << e.what() << endl;
        }
        catch (...)
        {
            cout << "An unknown error occurred." << endl;
        }
    }

    return 0;
}
