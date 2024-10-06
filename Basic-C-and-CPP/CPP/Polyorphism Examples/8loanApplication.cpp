#include <iostream>
using namespace std;

class LoanApplication
{
public:
    virtual void approve()
    // void approve()
    {
        cout << "\nLoanApplication Approval";
    };
};

class PersonalLoan : public LoanApplication
{
public:
    void approve() { cout << "\nPersonalLoan Application Approval."; }
};

class EducationLoan : public LoanApplication
{
public:
    void approve() { cout << "\nEducationLoan Application Approval."; }
};

class HomeLoan : public LoanApplication
{
public:
    void approve() { cout << "\nHomeLoan Application Approval."; }
};

class AutoLoan : public LoanApplication
{
public:
    void approve() { cout << "\nAutoLoan Application Approval."; }
};

int main()
{
    LoanApplication *LoanApplications[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 4 == 0)
        {
            LoanApplications[i] = new AutoLoan();
        }
        else if (i % 4 == 1)
        {
            LoanApplications[i] = new PersonalLoan();
        }
        else if (i % 4 == 2)
        {
            LoanApplications[i] = new EducationLoan();
        }
        else
        {
            LoanApplications[i] = new HomeLoan();
        }
    }

    for (int i = 0; i < 10; i++)
        LoanApplications[i]->approve();

    return 0;
}
