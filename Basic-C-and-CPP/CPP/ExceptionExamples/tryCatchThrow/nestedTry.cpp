#include <bits/stdc++.h>
using namespace std;
int main()
{

    try
    {
        cout << "\nOuter try";
        try
        {
            cout << "\nInner try";
            throw 2;
        }
        catch (int x)
        {
            cout << "\nInner catch";
            // throw 's';
        }

        throw 122;

        // try
        // {
        //     cout << "\nInner try 2";
        //     throw 2.6;
        // }
        // catch (double x)
        // {
        //     cout << "\nInner catch 2";
        //     throw;
        // }
    }
    catch (int e)
    {
        cout << "\nOuter Catch :" << e;
    }
    catch (char e)
    {
        cout << "\nOuter Catch Specialized For Char";
    }
    catch (...)
    {
        cout << "\nOuter Catch GENERALIZED";
    }

    return 0;
}