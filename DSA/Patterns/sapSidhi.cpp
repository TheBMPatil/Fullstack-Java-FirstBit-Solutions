using namespace std;
#include <iostream>

int main()
{
    int cnt = 100;
    for (int i = 10; i > 0; i--)
    {

        int k = cnt;
        if (i % 2 == 0)
        {
            k = cnt;
            for (int j = 0; j < 10; j++)
                cout << k - j << "  ";
        }
        else
        {
            k = cnt - 10;
            for (int j = 1; j <= 10; j++)
                cout << k + j << "  ";
        }

        cnt = cnt - 10;

        cout << endl;
    }
}