#include <iostream>
using namespace std;
int reverse(int, int);
int main()
{
    // int rev reverse(123, 0);
    cout << "\nReverse : " << reverse(123, 0);
}
int reverse(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    rev = (rev * 10) + (n % 10);

    return reverse(n / 10, rev);
}

//Sum of series // Strig reverse