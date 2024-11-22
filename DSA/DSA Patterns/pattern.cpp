#include <bits/stdc++.h>
using namespace std;

void oddEvenStarNumPattern()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            i % 2 == 0 ? cout << "* " : cout << j << " ";
        }
        cout << endl;
    }
}
//
void alphaPattern1()
{
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void alphaPattern2()
{
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << ch++ << " ";
        }
        // ch++;
        cout << endl;
    }
}

void alphaPattern3()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                cout << j << " ";
            else
                cout << "  ";
        }
        // ch++;
        cout << endl;
    }
}

// void thalaPattern()
// {
//     int curr = 4;
//     for (int i = 7; i > 0; i--)
//     {
//         for (int j = 7; j > 0; j--)
//         {
//             if (i == 1 || i == 7 || j == 1 || j == 7)
//                 cout << curr << " ";
//             else
//                 cout << "  ";
//             // if (i == j || j == 7)
//             //     cout << curr << " ";
//             // else
//             // {
//             //     if (j < 7 / 2)
//             //     {
//             //         cout << curr-- << " ";
//             //     }
//             //     else
//             //     {
//             //         cout << curr++ << " ";
//             //     }
//             // }
//         }
//         // ch++;
//         cout << endl;
//     }
// }

//    *****$
//    ****$$
//    ***$$$
//    **$$$$
//    *$$$$$
//    $$$$$$
void patternStarDoller(int n)
{
    for (int i = 0; i <= n; i++)
    {

        //            for (int j = 1; j <= n - i; j++) {
        //                cout<<("* ");
        //            }
        //            for (int j = n; j >= n - i; j--) {
        //                cout<<("$ ");
        //            }

        for (int j = 0; j <= n; j++)
        {
            if (j >= n - i)
            {
                cout << "$ ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void thalaPattern(int n)
{
    /*
          1 2 3 4 5 6 7

       1  4 4 4 4 4 4 4
       2  4 3 3 3 3 3 4
       3  4 3 2 2 2 3 4
       4  4 3 2 1 2 3 4
       5  4 3 2 2 2 3 4
       6  4 3 3 3 3 3 4
       7  4 4 4 4 4 4 4


       * */
    int cnt = n;

    n = (n * 2) - 2;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int atIndex = cnt - min(min(i, j), min(n - i, n - j));
            cout << atIndex << " ";
        }
        cout << endl;
    }
}

int main()
{
    thalaPattern(4);
}