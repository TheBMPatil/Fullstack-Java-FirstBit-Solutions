#include "emp.h"

Employee::Employee(int id, string name, double sal)
{
    this->id = id;
    this->name = name;
    this->salary = sal;
}

void Employee::displayEmployee()
{
    cout << "\n: Employee Data : " << endl;
    cout << "ID         : " << this->id;
    cout << "Name       : " << this->name;
    cout << "Salary     : " << this->salary;
}