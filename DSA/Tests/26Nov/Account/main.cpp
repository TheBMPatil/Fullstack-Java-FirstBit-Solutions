#include "Account.h"
int indx = -1;
int searchAccount(int AccNo, Account *ac[])
{
    for (int i = 0; i <= indx; i++)
    {
        if (ac[i]->getAccNo() == AccNo)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int size, count = 0;
    cout << "\nEnter Size for arrray :";
    cin >> size;
    // Account acc(123);
    Account *Accs[size];

    int ch;
    int accNo, idx;
    double  amt;
    do
    {
        count = Account::getAccCount();
        cout << "\nMenu :\nNo of Accounts currently we have : " << count;
        cout << "\n1)Create Account : \t2) See Account details \n3) See Balance \t4) Withdrow \n5) Deposite \t0) Exit ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            cout << "\nEnter Account no :";
            cin >> accNo;
            indx+=1;
            Accs[indx] = new Account(accNo);
            cout << "\nYour Account No is : " << Accs[indx]->getAccNo();
        }

        break;
        case 2:
        {
            cout << "\nEnter your Account no :";
            cin >> accNo;
            idx = searchAccount(accNo, Accs);
            if (idx != -1)
            {
                Accs[idx]->display();
            }
            else
            {
                cout << "\nAccount not found fo AccNo: " << accNo;
            }
        }
        break;
        case 3:
        {
            cout << "\nEnter your Account no :";
            cin >> accNo;
            idx = searchAccount(accNo, Accs);
            if (idx != -1)
            {
                cout << "\nAccouunt balance : " << Accs[idx]->getBalance();
            }
            else
            {
                cout << "\nAccount not found fo AccNo: " << accNo;
            }
        }
        break;
        case 4:
        {
            cout << "\nEnter your Account no :";
            cin >> accNo;
            idx = searchAccount(accNo, Accs);

            idx = searchAccount(accNo, Accs);
            if (idx != -1)
            {
                cout << "\nEnter Aamount To withdrow";
                cin >> amt;
                if (Accs[idx]->withdrow(amt))
                {
                    cout << "\nWithdrowl success,..!";
                    cout << "\nAccouunt balance : " << Accs[idx]->getBalance();
                }
                else
                {
                    cout << "\nWithdrowl fail: ";
                    cout << "\nAccouunt balance : " << Accs[idx]->getBalance();
                }
            }
            else
            {
                cout << "\nAccount not found fo AccNo: " << accNo;
            }
        }
        break;
        case 5:
        {
            cout << "\nEnter your Account no :";
            cin >> accNo;
            idx = searchAccount(accNo, Accs);

            idx = searchAccount(accNo, Accs);
            if (idx != -1)
            {
                cout << "\nEnter Aamount To deposite";
                cin >> amt;
                if (Accs[idx]->deposite(amt))
                {
                    cout << "\nDeposite success,..!";
                    cout << "\nAccouunt balance : " << Accs[idx]->getBalance();
                }
                else
                {
                    cout << "\nDeposite fail: ";
                    cout << "\nAccouunt balance : " << Accs[idx]->getBalance();
                }
            }
            else
            {
                cout << "\nAccount not found fo AccNo: " << accNo;
            }
        }
        break;
        case 0:
        {
            cout << "\n\n----------------------------------------------------------\nExiting!!!!!!!!!!";
        }
        break;
        default:
            cout << "\nInvalid Choice....!\n";
            break;
        }
    } while (ch != 0);

    return 0;
}