#include <bits/stdc++.h>
using namespace std;
class BankAccount
{
private:
    string name;
    int accNo;
    string accType;
    double balance;

public:
    BankAccount()
    {
        name = "No Name";
        accNo = 0;
        accType = "None";
        balance = 0;
    }
    BankAccount(string name, int accNo, string accType, double balance)
    {
        this->name = name;
        this->accNo = accNo;
        this->accType = accType;
        this->balance = balance;
    }
    // Setter
    void setName(string name) { this->name = name; }
    void setAccNo(int accNo) { this->accNo = accNo; }
    // void setBalance(double balance) { this->balance = balance; }
    void setAccType(string accType) { this->accType = accType; }

    // getters
    string getName() { return this->name; }
    string getAccType() { return this->accType; }
    double getBalance() { return this->balance; }
    int getAccNo() { return this->accNo; }

    virtual void wihdrow(double money)
    {
        this->balance -= money;
    }
    virtual void deposit(double money)
    {
        this->balance += money;
    }

    void display()
    {
        cout << "Acc no : " << this->accNo << endl;
        cout << "Acc Holder Name : " << this->name << endl;
        cout << "Type of Account: " << this->accType << endl;
        cout << "Balance : " << this->balance << endl;
    }
};
//

int main()
{
    BankAccount bankAccount;
    int ch = 0;
    do
    {
        double money = 0;
        cout << "\nEnter Your Choice :: " << endl
             << "1) Create Account \t 2) Diaplay account details \t 3) Deposit Money " << endl
             << "4) Withdrow money \t 5) Display name and balance " << endl
             << "\t:";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            string name, accType;
            int accNo;

            cout << "\nEnter Name of Acc Holder : ";
            cin >> name;
            cout << "\nEnter Type of Acc : ";
            cin >> accType;
            cout << "\nEnter Acc No : ";
            cin >> accNo;
            cout << "\nEnter Initial Deposite : ";
            cin >> money;
            bankAccount.setName(name);
            bankAccount.setAccType(accType);
            bankAccount.setAccNo(accNo);
            bankAccount.deposit(money);
        }
        break;
        case 2:
        {
            bankAccount.display();
        }
        break;
        case 3:
        {
            cout << "\nEnter Amount you want to deosite : ";
            cin >> money;
            bankAccount.deposit(money);
        }
        break;

            break;
        case 4:
        {
            cout << "\nEnter Amount you want to Withdrow : ";
            cin >> money;
            if (bankAccount.getBalance() < money)
            {
                cout << "\nLow Balance....!" << " \nBalance : " << bankAccount.getBalance();
            }
            else
            {
                cout << "\nWithdrowal Success...!";
                bankAccount.wihdrow(money);
                cout << "\nDebited amt :" << money;
                cout << "\nBalance : " << bankAccount.getBalance();
            }
        }
        break;
        case 5:
        {
            cout << "\nName of Account Holder : " << bankAccount.getName();
            cout << "\nAccount Number : " << bankAccount.getAccNo();
            cout << "\nAccount Balance : " << bankAccount.getBalance();
        }
        break;
        default:
            cout << "\n\nInvalid Choice..";
            break;
        }

    } while (ch != 0);

    // cout << "Hii";
}