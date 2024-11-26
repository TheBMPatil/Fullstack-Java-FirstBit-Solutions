#include <bits/stdc++.h>
using namespace std;

class Account
{
    static int countOfAcc;
    int accNo;
    double balance;

public:
    Account(int);

    bool withdrow(double);
    bool deposite(double);

    int getAccNo();
    int static getAccCount();
    double getBalance();
    void display();
};