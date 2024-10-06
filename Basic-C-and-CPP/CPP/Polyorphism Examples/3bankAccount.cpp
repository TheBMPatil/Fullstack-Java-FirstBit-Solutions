#include <iostream>
using namespace std;
class BankAccount
{
public:
    // void withdrow()
    virtual void withdrow()
    {
        cout << "\n Bank Withdrow";
    }
};

class Savings : public BankAccount
{
public:
    void withdrow()
    {
        cout << "\nSaving  Withdrow";
    }
};

class Current : public BankAccount
{
public:
    void withdrow()
    {
        cout << "\nCurrent  Withdrow";
    }
};

class Loan : public BankAccount
{
public:
    void withdrow()
    {
        cout << "\nLoan Withdrow";
    }
};

int main()
{
    BankAccount *bankAccounts[5];
    for (int i = 0; i < 5; i++)
    {
        if (i / 2 == 0)
        {
            bankAccounts[i] = new Savings();
        }
        else if (i % 2 == 0)
        {
            bankAccounts[i] = new Current();
        }
        else
        {
            bankAccounts[i] = new Loan();
        }
    }

    for (int i = 0; i < 5; i++)
    {
        bankAccounts[i]->withdrow();
    }

    return 0;
}