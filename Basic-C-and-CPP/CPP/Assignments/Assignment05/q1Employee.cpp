#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int id;
    char name[20];
    double salary;
    // Costructor

public:
    Employee()
    {
        // cout << "\nDefault Costructor called\n";
        this->id = 0;
        strcpy(this->name, "No Name");
        this->salary = 0;
    }

    Employee(char *name, int id, float salary)
    {
        // cout << "\nParameterized Costructor for Employee called";
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
    void setSalary(float salary)
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
    float getSalary()
    {
        return this->salary;
    }

    // Display
    virtual void display()
    {
        cout << "\nId : " << this->id << "\tName :" << this->name << "\t Salary :" << this->salary;
    }
    // Calculate salry
    virtual double calSal()
    {
        return salary;
    }
    virtual void sendSalary()
    {
        double totalSalary = this->calSal();
        cout << "Salary sent to employee." << endl
             << "Amount : " << totalSalary << endl;
    }
};

class SalesManager : public Employee
{
private:
    float incentive;
    int target;

public:
    // Costructor
    SalesManager()
    {
        // cout << "\nDefault Costructor called\n";

        this->incentive = 0;
        this->target = 0;
    }

    SalesManager(char *name, int id, float salary, float incentive, int target) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Costructor for SalesManager called";

        this->incentive = incentive;
        this->target = target;
    }

public:
    // Setters

    void setIncentive(float incentive)
    {
        this->incentive = incentive;
    }
    void setTarget(int target)
    {
        this->target = target;
    }

    // Getters

    float getIncentive()
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
        cout << "\tIncentive : " << this->incentive << "\tTarget : " << this->target;
    }

    // Calculate salary
    double calSal()
    {
        return this->getSalary() + incentive;
    }
    // Send Salary
    void sendSalary()
    {
        double totalSalary = this->calSal();
        cout << "Salary sent to employee." << endl
             << "Amount : " << totalSalary << endl;
    }
};

class Admin : public Employee
{
    // id,name,salary,allowence
private:
    float allowence;

public:
    // Construuctor

    Admin()
    {
        // cout << "\nDefault Costructor called Admin\n";
        this->allowence = 00;
    }

    Admin(char *name, int id, float salary, float allowence) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Costructor for Admin called";

        this->allowence = allowence;
    }

    // Setters

    void setAllowence(float allowence)
    {
        this->allowence = allowence;
    }

    // Display
    void display()
    {
        Employee::display();
        cout << "\tAllowence :" << this->allowence;
    }

    // getters

    float getAllowence()
    {
        return this->allowence;
    }
    double calSal()
    {
        return this->getSalary() + allowence;
    }
    // Send Salary
    void sendSalary()
    {
        double totalSalary = this->calSal();
        cout << "Salary sent to employee." << endl
             << "Amount : " << totalSalary << endl;
    }
};

class HR : public Employee
{
private:
    float commission;

public:
    // Costructor
    HR()
    {
        // cout << "\nDefault Costructor called HR\n";
        this->commission = 0;
    }
    HR(char *name, int id, float salary, float commission) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Costructor for HR called";

        this->commission = commission;
    }

    // Setters

    void setCommission(float commission)
    {
        this->commission = commission;
    }

    // Getters

    float getCommission()
    {
        return this->commission;
    }

    // Display
    void display()
    {
        Employee::display();
        cout << "\tCommission : " << this->commission;
    }

    double calSal()
    {
        return this->getSalary() + commission;
    } // Send Salary
    void sendSalary()
    {
        double totalSalary = this->calSal();
        cout << "Salary sent to employee." << endl
             << "Amount : " << totalSalary << endl;
    }
};

class AreaSalesManager : public SalesManager
{
private:
    char location[20];

public:
    AreaSalesManager()
    {
        // cout << "\nDefault Costructor for AreaSalesManager called";
        strcpy(location, "Not Given");
    }
    AreaSalesManager(char *name, int id, float salary, float incentive, int target, char *location) : SalesManager(name, id, salary, incentive, target)
    {
        // cout << "\nParameterized Costructor for AreaSalesManager called";
        strcpy(this->location, location);
    }

    void display()
    {
        SalesManager::display();
        cout << "\tLocation :" << this->location;
    } // Send Salary
    void sendSalary()
    {
        double totalSalary = this->calSal();
        cout << "Salary sent to employee." << endl
             << "Amount : " << totalSalary << endl;
    }
};

int main()
{
    Employee *employee[5];
    employee[0] = new SalesManager("Bhagvat", 123, 500000, 1200, 22);
    employee[1] = new AreaSalesManager("Bhagvat", 123, 690000, 1200, 2, "Pune");
    employee[2] = new HR("Pinto", 124, 560000, 345);
    employee[3] = new Admin("Teja", 122, 780000, 3233);
    cout << "\n..................................................................................................................\n";
    for (int i = 0; i < 4; i++)
    {
        employee[i]->display();
        cout << "\n\nTotal Salary :" << employee[i]->calSal() << endl;
        cout << endl;
        employee[i]->sendSalary();
        cout << "\n..................................................................................................................\n";
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