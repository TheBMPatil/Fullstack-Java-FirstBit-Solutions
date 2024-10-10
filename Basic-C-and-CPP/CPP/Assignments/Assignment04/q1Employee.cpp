#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int id;
    char name[20];
    double salary;
    // Conclassor

public:
    Employee()
    {
        // cout << "\nDefault conclassor called\n";
        this->id = 0;
        strcpy(this->name, "No Name");
        this->salary = 0;
    }

    Employee(char *name, int id, double salary)
    {
        // cout << "\nParameterized Conclassor for Employee called";
        strcpy(this->name, name);
        this->id = id;
        this->salary = salary;
    }

    // Setters
    void setId(int Id)
    {
        this->id = Id;
    }
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }
    // Getters
    int getId()
    {
        return this->id;
    }
    char *getName()
    {
        return this->name;
    }
    double getSalary()
    {
        return this->salary;
    }

    // Calculate salary
    virtual double CalculateSalary()
    {
        return salary; // Basic salary for general employees
    }

    // Display
    virtual void display()
    {
        cout << "\nId : " << this->id << "\tName :" << this->name << "\t Salary :" << this->salary;
    }
};

class SalesManager : public Employee
{
private:
    double incentive;
    int target;

public:
    // Conclassor
    SalesManager()
    {
        // cout << "\nDefault conclassor called\n";

        this->incentive = 0;
        this->target = 0;
    }

    SalesManager(char *name, int id, double salary, double incentive, int target) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Conclassor for SalesManager called";

        this->incentive = incentive;
        this->target = target;
    }
    // CalculateSalary
    double CalculateSalary()
    {
        return getSalary() + incentive; // Total salary = Basic Salary + Incentive
    }

public:
    // Setters

    void setIncentive(double incentive)
    {
        this->incentive = incentive;
    }
    void setTarget(int target)
    {
        this->target = target;
    }

    // Getters

    double getIncentive()
    {
        return this->incentive;
    }
    int getTarget()
    {
        return this->target;
    }

    // Display
    void display()
    {
        Employee::display();
        cout << "\nIncentive : " << this->incentive << "\tTarget : " << this->target;
    }
};

class Admin : public Employee
{
    // id,name,salary,allowence
private:
    double allowence;

public:
    // Construuctor

    Admin()
    {
        // cout << "\nDefault conclassor called Admin\n";
        this->allowence = 00;
    }

    Admin(char *name, int id, double salary, double allowence) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Conclassor for Admin called";

        this->allowence = allowence;
    }

    // Setters

    void setAllowence(double allowence)
    {
        this->allowence = allowence;
    }
    // CalculateSalary
    double CalculateSalary()
    {
        return getSalary() + allowence; // Total salary = Basic Salary + Allowance
    }

    // Display
    void display()
    {
        Employee::display();
        cout << "\nAllowence :" << this->allowence;
    }

    // getters

    double getAllowence()
    {
        return this->allowence;
    }
};

class HR : public Employee
{
private:
    double commission;

public:
    // Conclassor
    HR()
    {
        // cout << "\nDefault conclassor called HR\n";
        this->commission = 0;
    }
    HR(char *name, int id, double salary, double commission) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Conclassor for HR called";

        this->commission = commission;
    }

    // Setters

    void setCommission(double commission)
    {
        this->commission = commission;
    }

    // Getters

    double getCommission()
    {
        return this->commission;
    }
    // CalculateSalary
    double CalculateSalary()
    {
        return getSalary() + (getSalary() * commission / 100); // Total salary = Basic Salary + Commission
    }

    // Display
    void display()
    {
        Employee::display();
        cout << "\nCommission : " << this->commission;
    }
};

class AreaSalesManager : public SalesManager
{
private:
    char location[20];

public:
    AreaSalesManager()
    {
        // cout << "\nDefault Conclassor for AreaSalesManager called";
        strcpy(location, "Not Given");
    }
    AreaSalesManager(char *name, int id, double salary, double incentive, int target, char *location) : SalesManager(name, id, salary, incentive, target)
    {
        // cout << "\nParameterized Conclassor for AreaSalesManager called";
        strcpy(this->location, location);
    }
    // CalculateSalary
    double CalculateSalary()
    {
        return SalesManager::CalculateSalary(); // Inherits from SalesManager
    }

    void display()
    {
        SalesManager::display();
        cout << "\nLocation :" << this->location;
    }
};

int main()
{
    Employee *employee[5];
    employee[0] = new SalesManager("Bhagvat", 123, 500000, 1200, 22);
    employee[1] = new AreaSalesManager("Bhagvat", 123, 690000, 1200, 2, "Pune");
    employee[2] = new HR("Pinto", 124, 560000, 345);
    employee[3] = new Admin("Teja", 122, 780000, 3233);
    for (int i = 0; i < 4; i++)
    {
        employee[i]->display();
        cout << "\nTotal Salary: " << employee[i]->CalculateSalary(); // Display total salary
    }

    // cout << "\n\nSales Manager Data :\n";
    // SalesManager s1("Bhagvat", 123, 690000, 1200, 2);
    // s1.display();

    // cout << "\n\nArea Sales Manager Data :\n";
    // AreaSalesManager As1("Bhagvat", 123, 690000, 1200, 2, "Pune");
    // As1.display();

    // cout << "\n\nHR Data :\n";
    // HR hr("Pinto", 124, 560000, 345);
    // hr.display();

    // cout << "\n\nAdmin Data :\n";
    // Admin admin("Teja", 122, 780000, 3233);
    // admin.display();

    return 1;
}