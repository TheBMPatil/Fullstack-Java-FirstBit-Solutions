#include <bits/stdc++.h>
using namespace std;

int main()
{
    int storedPass = 787;
    int userPass;
    string storedId = "TheBMPatil";
    string userId;

    cout << "Enter UserId : ";
    cin >> userId;
    cout << "\nEnter Password : ";
    cin >> userPass;

    try
    {
        if (userId == storedId)
        {

            if (userPass != storedPass)
            {
                throw userPass;
            }
            else
            {
                cout << "\nLogin Successful";
            }
        }
        else
        {
            throw userId;
        }
    }
    catch (int n)
    {
        cout << "\nPassword Incorrect";
    }
    catch (string s)
    {
        cout << "\nUserID Incorrect";
    }
    return 0;
}