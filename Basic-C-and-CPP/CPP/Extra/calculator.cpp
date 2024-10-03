#include <stdio.h>
#include <iostream>
using namespace std;
struct Calculator
{
    // Addition
    int add(int a, int b) { return a + b; }
    float add(float a, int b) { return a + b; }
    float add(int a, float b) { return a + b; }
    float add(float a, float b) { return a + b; }

    // Substraction
    int sub(int a, int b) { return a - b; }
    float sub(float a, int b) { return a - b; }
    float sub(int a, float b) { return a - b; }
    float sub(float a, float b) { return a - b; }

    // multiplication
    int mul(int a, int b) { return a * b; }
    float mul(float a, int b) { return a * b; }
    float mul(int a, float b) { return a * b; }
    float mul(float a, float b) { return a * b; }

    // Division
    int div(int a, int b) { return a / b; }
    float div(float a, int b) { return a / b; }
    float div(int a, float b) { return a / b; }
    float div(float a, float b) { return a / b; }
};

int main()
{
    int a = 10, b = 15;
    float c = 5.0, d = 10.0;
    int res;
    float fres;
    Calculator calc;

    // Int Int Wal function
    cout << "Int InT Wale ";
    res = calc.add(a, b);
    cout << "\nAddition :" << res;
    res = calc.sub(a, b);
    cout << "\nSubstr :" << res;
    res = calc.mul(a, b);
    cout << "\nMult :" << res;
    res = calc.div(a, b);
    cout << "\nDiv :" << res;

    // Int float Wal function
    cout << "\nInT Float Wale ";
    fres = calc.add(a, c);
    cout << "\nAddt :" << fres;
    fres = calc.sub(a, c);
    cout << "\nSub :" << fres;
    fres = calc.mul(a, c);
    cout << "\nMul :" << fres;
    fres = calc.div(a, c);
    cout << "\nDiv :" << fres;

    // Float Int wal
    cout << "\nFloat Int Wale ";
    fres = calc.add(a, d);
    cout << "\nAddt   :" << fres;
    fres = calc.sub(a, d);
    cout << "\nSub :" << fres;
    fres = calc.mul(a, d);
    cout << "\nMul :" << fres;
    fres = calc.div(a, d);
    cout << "\nDiv :" << fres;

    // FLoat float wale
    cout << "\nFloat FLoat Wale ";
    fres = calc.add(c, d);
    cout << "\nAddt   :" << fres;
    fres = calc.sub(c, d);
    cout << "\nSub :" << fres;
    fres = calc.mul(c, d);
    cout << "\nMul :" << fres;
    fres = calc.div(c, d);
    cout << "\nDiv :" << fres;

    return 0;
}