#include <bits/stdc++.h>
using namespace std;

int verifyId(string userid)
{
    string userId = "TheBMPatil";

    if (userId == userid)
        return 1;

    throw 101;
}
int verifyPass(string userPass)
{
    string userPassword = "Pass@123";

    if (userPass == userPassword)
        return 1;

    throw 104;
}

int verifyUser(string username, string password)
{
    if (verifyId(username) == 1 && verifyPass(password) == 1)
        return 1;

    throw;
}
int main()
{
    string username;
    string password;

    int x = 1;

    cout << "\nEnter UserName : ";
    cin >> username;
    cout << "\nEnter Password : ";
    cin >> password;
    while (x)
    {
        try
        {

            if (verifyUser(username, password) == 1)
            {
                cout << "\nLogin Successful..!";
                x = 0;
            }
        }

        catch (int y)
        {
            if (y == 101)
            {
                cout << "\nInvalid UserName..!";
                cout << "\nEnter Again : ";
                cin >> username;
                // verifyUser(username, password);
            }

            if (y == 104)
            {
                cout << "\nInvalid Password..!";
                cout << "\nEnter Again : ";
                cin >> password;
                // verifyUser(username, password);
            }
        }
    }

    return 0;
}