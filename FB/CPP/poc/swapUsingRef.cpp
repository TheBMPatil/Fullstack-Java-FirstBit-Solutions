#include <iostream>
using namespace std;
void swppUsinngRef(int &, int &);
int main()
{
    int a, b;
    cout << "Enter Num1\n";
    scanf("%d", &a);
    cout << "Enter Num2\n";
    scanf("%d", &b);
    cout << "Num1 = " << a << "\n";
    cout << "Num2 = " << b << "\n";

    swppUsinngRef(a, b);
    cout << "After swap \nNum1 = " << a << "\n";
    cout << "Num2 = " << b << "\n";
    return 0;
}

void swppUsinngRef(int &n1, int &n2)
{
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
}