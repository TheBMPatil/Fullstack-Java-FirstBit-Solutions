#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two values A and B :";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw 0;
        }
        cout << "\nDivision : " << a / b;
    }
    catch (int e)
    {
        cout << "\nDivide by Zero Exception";
    }

    return 0;
}