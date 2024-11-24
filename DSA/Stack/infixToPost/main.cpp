#include "stk.h"

int main()
{
    string expression;
    cout << "\nEnter A infix Expression : ";
    cin >> expression;
    string post = expression;

    // cout << &post << endl;
    // cout << &expression;

    // toPostFix();
    return 0;
}

string toPostFix(string &exp)
{
    int len = exp.length();
    char *res = new char[len];
    for (int i = 0; i < len; i++)
    {
        
    }

    return res;
}