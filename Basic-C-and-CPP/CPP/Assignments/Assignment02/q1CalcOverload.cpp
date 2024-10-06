// Write a functions to add 2 int value, 2 float value, 1 int and 1 float value and vice versa . similary write functions for all other arithmetic operations.

#include <iostream>
using namespace std;
struct Calculator
{
    // Add
    int add(int a, int b) { return a + b; }
    float add(float a, float b) { return a + b; }
    float add(int a, float b) { return a + b; }
    float add(float a, int b) { return a + b; }
    // Suctract
    int sub(int a, int b) { return a - b; }
    float sub(float a, float b) { return a - b; }
    float sub(int a, float b) { return a - b; }
    float sub(float a, int b) { return a - b; }
    // Divide
    int div(int a, int b) { return a / b; }
    float div(float a, float b) { return a / b; }
    float div(int a, float b) { return a / b; }
    float div(float a, int b) { return a / b; }
    // Mul
    int mul(int a, int b) { return a * b; }
    float mul(float a, float b) { return a * b; }
    float mul(int a, float b) { return a * b; }
    float mul(float a, int b) { return a * b; }
};

int main()
{
    int a, b;
    float c, d;
    Calculator ad;
    cout << "Enter Two Integers : ";
    cout << "\nNumber1 :";
    cin >> a;
    cout << "\nNumber2 :";
    cin >> b;
    cout << "\nAddition : " << ad.add(a, b);
    cout << "\nSub : " << ad.sub(a, b);
    cout << "\nMul : " << ad.mul(a, b);
    cout << "\nDiv : " << ad.div(a, b);

    cout << "\n\nEnter Two Floats : ";
    cout << "\nNumber1 :";
    cin >> c;
    cout << "\nNumber2 :";
    cin >> d;
    cout << "\nAddition : " << ad.add(c, d);
    cout << "\nSub : " << ad.sub(c, d);
    cout << "\nMul : " << ad.mul(c, d);
    cout << "\nDiv : " << ad.div(c, d);

    cout << "\n\nEnter  one integer One Float : ";
    cout << "\nNumber1 :";
    cin >> b;
    cout << "\nNumber2 :";
    cin >> d;
    cout << "\nAddition : " << ad.add(b, d);
    cout << "\nSub : " << ad.sub(b, d);
    cout << "\nMul : " << ad.mul(b, d);
    cout << "\nDiv : " << ad.div(b, d);

    cout << "\n\nEnter One Float one integer : ";
    cout << "\nNumber1 :";
    cin >> c;
    cout << "\nNumber2 :";
    cin >> a;
    cout << "\nAddition : " << ad.add(c, a);
    cout << "\nSub : " << ad.sub(c, a);
    cout << "\nMul : " << ad.mul(c, a);
    cout << "\nDiv : " << ad.div(c, a);
}