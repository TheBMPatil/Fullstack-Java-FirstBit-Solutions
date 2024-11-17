#include <bits/stdc++.h>
using namespace std;

void myFun(int x)
{
    static int z = 10;
    int c = x + z;
    cout << "\nValue of C : " << c;
    cout << "\nValue of z : " << z;
    z *= z;
    cout << "\nValue of z : " << z;
}

int main()
{
    int a = 1;
    for (int i = 1; i < 4; i++)
    {
        myFun(a++);
        cout << "\nValue of A : " << a;
        cout << "\nValue of I : " << i;
    }

    return 0;
}