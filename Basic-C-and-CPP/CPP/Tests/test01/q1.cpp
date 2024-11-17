// MAn stairs ways

#include <bits/stdc++.h>
using namespace std;

int noOfWays(int stairs)
{

    int ways = 1, num2 = 1, Next;

    for (int i = 1; i <= stairs; i++)
    {
        Next = ways + num2;
        ways = num2;
        num2 = Next;
    }

    return ways;
}
int main()
{
    int x = 1;
    while (x)
    {
        /* code */

        cout << "\n Enter No Of stairs : ";
        int stairs;
        cin >> stairs;

        cout << "\nTotal Ways : " << noOfWays(stairs);
        cout << "\nDo You want to continue : ";
        cin >> x;
    }
    return 0;
}