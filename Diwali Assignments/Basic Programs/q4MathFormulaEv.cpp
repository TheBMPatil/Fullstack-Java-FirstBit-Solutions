#include <bits/stdc++.h>
using namespace std;

// 4.  Accept value’s of (x & y) and solve following Expression.
// (Z=(4x2+5y3)/2xy)

int expressionFormula(double x, double y)
{
    // double Z = 0;

    double p1 = (4 * (x * x)) + (5 * (y * y * y));
    double p3 = 2 * (x * y);
    return p1 / p3;
    // return Z;
    // return ((4 * x * x) + (5 * y * y * y)) / 2 * (x * y);
}

int main()
{
    double x, y;
    cout << "Enter Values for X and Y : ";
    cin >> x;
    cout << ":";
    cin >> y;
    double result = expressionFormula(x, y);

    cout << "\nResult Of Expression : (Z=(4x2+5y3)/2xy) with values X = " << x << " and Y = " << y << " is : " << result << endl;
    return 0;
}
