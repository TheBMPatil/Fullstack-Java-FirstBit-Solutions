#include "Account.h"

int Account::countOfAcc = 0;

Account::Account(int AccNo)
{
    countOfAcc++;
    this->accNo = ((AccNo * AccNo) + Account::countOfAcc);
    this->balance = 0;
}

int Account::getAccNo()
{
    return this->accNo;
}
int Account::getAccCount()
{
    return countOfAcc;
}

double Account::getBalance()
{
    return this->balance;
}

bool Account::deposite(double amt)
{
    this->balance += amt;
    return true;
}

bool Account::withdrow(double amt)
{
    if (this->balance == 0.0 || this->balance < amt)
    {
        return false;
    }
    this->balance -= amt;
    return true;
}
void Account::display()
{
    cout << "\n========== Account Data ============";
    cout << "\nAccount No   :" << this->accNo;
    cout << "\nBalance      :" << this->balance;
    cout << "\nAccount ID   :" << countOfAcc;
    cout << "\n====================================\n";
}