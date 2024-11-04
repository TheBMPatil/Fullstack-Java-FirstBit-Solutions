#include <bits/stdc++.h>
using namespace std;
// 3.  Swap 2(two) value’s without using third variable.

void swapTwoNums(int &num1, int &num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main()
{
    int n1 = 0, n2 = 0;
    cout << "Enter Num1 : ";
    cin >> n1;
    cout << "Enter Num2 : ";
    cin >> n2;
    cout << "____________________________________________________________________________________________________";
    cout << "\nValue Before swap : \nNum1  = " << n1 << endl
         << "Num2 = " << n2 << endl;

    swapTwoNums(n1, n2);
    cout << "____________________________________________________________________________________________________";

    cout << "\nValue After swap : \nNum1  = " << n1 << endl
         << "Num2 = " << n2 << endl;
    cout << "____________________________________________________________________________________________________";
}
