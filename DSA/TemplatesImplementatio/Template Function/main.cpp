#include <bits/stdc++.h>
using namespace std;
template <class T>
T add(T n1, T n2)
{
    return n1 + n2;
}

int main()
{
    float num1, num2;
    cout << "Enter Two Numbers : ";
    cin >> num1 >> num2;

    cout << "Addition is  : "<<add(num1, num2);
    return 0;
}