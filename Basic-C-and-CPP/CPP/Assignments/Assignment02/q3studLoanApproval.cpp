// 3. Write a function to approve the loan for student based on there percentage and for employee based on there annual salary.
// Condition for student:
// Above 80: 2 lakh
// Between 60-80: 1 lakh
// Between 40-50: 50 k
// Below 40: no loan approved
// Condition for employee:
// Above 12 LPA: 7 lakh
// Between 10-12 lpa: 6 lakh
// Between 6-10 lpa: 5 lakh
// Between 4-6 lpa: 4 lakh
// Below 4 lpa: no loan approved

#include <iostream>
#include <string.h>
using namespace std;
// Emp Class
class Employee
{
private:
    double income;
    char name[25];
    // int accNo;

public:
    Employee()
    {
        strcpy(this->name, "No Name");
        this->income = 0.00;
        // this->accNo = 0000;
    }
    Employee(char *name, double income)
    {
        strcpy(this->name, name);
        this->income = income;
    }
    void setIncome(double income)
    {
        this->income = income;
    }
    double getIncome()
    {
        return this->income;
    }
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
    char *getName()
    {
        return this->name;
    }
    void display()
    {
        cout << "\nName of Employee  :" << this->name;
        cout << "\nPercentage of Employee  :" << this->income;
    }
};

// Student class
class Student
{
private:
    double percentage;
    char name[25];
    // int accNo;

public:
    Student()
    {
        strcpy(this->name, "No Name");
        this->percentage = 0.00;
    }
    Student(char *name, double percentage)
    {
        strcpy(this->name, name);
        this->percentage = percentage;
    }
    void setPercentage(double percentage)
    {
        this->percentage = percentage;
    }
    double getPercentage()
    {
        return this->percentage;
    }
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
    char *getName()
    {
        return this->name;
    }

    void display()
    {
        cout << "\nName of Student  :" << this->name;
        cout << "\nPercentage of Student  :" << this->percentage;
    }
};

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
    void approve(Student student)
    {
        // Condition for student:
        int percentage = student.getPercentage();

        if (percentage > 80)
        {
            // Above 80: 2 lakh
            cout << "\nCongratulations your Personal Loan of Rs. 200000.00 is approved...!" << endl;
        }
        else if (percentage < 80 && percentage > 60)
        // Between 60-80: 1 lakh
        {
            cout << "\nCongratulations your Personal Loan of Rs. 100000.00 is approved...!" << endl;
        }
        else if (percentage < 50 && percentage > 40)
        // Between 40-50: 50 k
        {
            cout << "\nCongratulations your Personal Loan of Rs. 50000.00 is approved...!" << endl;
        }
        else
        // Below 40: no loan approved
        {
            cout << "\nWe regret to say that your loan couldn't be approved...!" << endl;
        }
    }
    void approve(Employee employee)
    {
        // Condition for employee:
        int inc = employee.getIncome();

        if (inc > 1200000)
        {
            // Above 12 LPA: 7 lakh
            cout << "\nCongratulations your Personal Loan of Rs. 700000.00 is approved...!" << endl;
        }
        else if (inc < 1200000 && inc > 1000000)
        {
            // Between 10-12 lpa: 6 lakh
            cout << "\nCongratulations your Personal Loan of Rs. 600000.00 is approved...!" << endl;
        }
        else if (inc < 1000000 && inc > 600000)
        {
            // Between 6-10 lpa: 5 lakh
            cout << "\nCongratulations your Personal Loan of Rs. 500000.00 is approved...!" << endl;
        }
        else if (inc > 400000 && inc < 600000)
        // Between 4-6 lpa: 4 lakh
        {
            cout << "\nCongratulations your Personal Loan of Rs. 400000.00 is approved...!" << endl;
        }
        else
        {
            // Below 4 lpa: no loan approved
            cout << "\nWe regret to say that your loan couldn't be approved...!" << endl;
        }
    }
};

class EducationLoan : public LoanApplication
{
public:
    void approve(Student student)
    {
        // Condition for student:
        int percentage = student.getPercentage();

        if (percentage > 80)
        {
            // Above 80: 2 lakh
            cout << "\nCongratulations your Educational Loan of Rs. 200000.00 is approved...!" << endl;
        }
        else if (percentage < 80 && percentage > 60)
        // Between 60-80: 1 lakh
        {
            cout << "\nCongratulations your Educational Loan of Rs. 100000.00 is approved...!" << endl;
        }
        else if (percentage < 50 && percentage > 40)
        // Between 40-50: 50 k
        {
            cout << "\nCongratulations your Educational Loan of Rs. 50000.00 is approved...!" << endl;
        }
        else
        // Below 40: no loan approved
        {
            cout << "\nWe regret to say that your Educational loan couldn't be approved...!" << endl;
        }
    }
};

class HomeLoan : public LoanApplication
{
public:
    // void approve(Employee employee) { cout << "\nPersonalLoan Application Approval."; }
    void approve(Employee employee)
    {
        // Condition for employee:
        int inc = employee.getIncome();

        if (inc > 1200000)
        {
            // Above 12 LPA: 7 lakh
            cout << "\nCongratulations your Home Loan of Rs. 700000.00 is approved...!" << endl;
        }
        else if (inc < 1200000 && inc > 1000000)
        {
            // Between 10-12 lpa: 6 lakh
            cout << "\nCongratulations your Home Loan of Rs. 600000.00 is approved...!" << endl;
        }
        else if (inc < 1000000 && inc > 600000)
        {
            // Between 6-10 lpa: 5 lakh
            cout << "\nCongratulations your Home Loan of Rs. 500000.00 is approved...!" << endl;
        }
        else if (inc > 400000 && inc < 600000)
        // Between 4-6 lpa: 4 lakh
        {
            cout << "\nCongratulations your Home Loan of Rs. 400000.00 is approved...!" << endl;
        }
        else
        {
            // Below 4 lpa: no loan approved
            cout << "\nWe regret to say that your Home loan couldn't be approved...!" << endl;
        }
    }
};

class AutoLoan : public LoanApplication
{
public:
    void approve() { cout << "\nAutoLoan Application Approval."; }
    void approve(Employee employee)
    {
        // Condition for employee:
        int inc = employee.getIncome();

        if (inc > 1200000)
        {
            // Above 12 LPA: 7 lakh
            cout << "\nCongratulations your Auto Loan of Rs. 700000.00 is approved...!" << endl;
        }
        else if (inc < 1200000 && inc > 1000000)
        {
            // Between 10-12 lpa: 6 lakh
            cout << "\nCongratulations your Auto Loan of Rs. 600000.00 is approved...!" << endl;
        }
        else if (inc < 1000000 && inc > 600000)
        {
            // Between 6-10 lpa: 5 lakh
            cout << "\nCongratulations your Auto Loan of Rs. 500000.00 is approved...!" << endl;
        }
        else if (inc > 400000 && inc < 600000)
        // Between 4-6 lpa: 4 lakh
        {
            cout << "\nCongratulations your Auto Loan of Rs. 400000.00 is approved...!" << endl;
        }
        else
        {
            // Below 4 lpa: no loan approved
            cout << "\nWe regret to say that your Auto loan couldn't be approved...!" << endl;
        }
    }
};

int main()
{
    // LoanApplication *LoanApplications[4];
    EducationLoan ed;
    Student s1("Happy", 84.99);
    s1.display();
    ed.approve(s1);
    // LoanApplications[0]->approve(s1);
    Student s2("Good", 75.69);
    s2.display();
    ed.approve(s2);
    // LoanApplications[0]->approve(s2);
    Student s3("OKesh", 47.89);
    s3.display();
    ed.approve(s3);
    // LoanApplications[0]->approve(s3);
    Student s4("sad", 35.50);
    s4.display();
    ed.approve(s4);
    // LoanApplications[0]->approve(s4);

    PersonalLoan pl;
    HomeLoan hL;
    AutoLoan al;
    Employee e1("Happy", 1800000);
    e1.display();
    pl.approve(e1);
    hL.approve(e1);
    al.approve(e1);

    Employee e2("Good", 1150000);
    e2.display();
    pl.approve(e2);
    hL.approve(e2);
    al.approve(e2);

    Employee e3("OKesh", 656000);
    e3.display();
    pl.approve(e3);
    hL.approve(e3);
    al.approve(e3);

    Employee e4("sad", 550000);
    e4.display();
    pl.approve(e4);
    hL.approve(e4);
    al.approve(e4);

    Employee e5("Verysad", 325000);
    e5.display();
    pl.approve(e5);
    hL.approve(e5);
    al.approve(e5);

    return 0;
}
