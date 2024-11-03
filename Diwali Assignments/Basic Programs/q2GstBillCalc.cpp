#include <bits/stdc++.h>
using namespace std;
// 2.  Accept Bill Amount & calculate 18% GST Amount & final Amount.
double calculateBill(double &amount)
{
    double gstAmt = (18.0 / 100) * amount;
    return amount + gstAmt;
}
int main()
{
    double amount = 0;
    cout << "Enter Bill Amount : ";
    cin >> amount;

    double grossBill = calculateBill(amount);

    cout << "\nTotal Bill : " << grossBill << endl;

    return 0;
}