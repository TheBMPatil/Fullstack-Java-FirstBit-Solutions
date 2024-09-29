#include <iostream>
#include <string.h>
using namespace std;
typedef struct Employee
{
    int id;
    char name[20];
    float salary;
    // Constructor
    Employee()
    {
        this->id = NULL;
        strcpy(this->name, "No Name");
        this->salary = NULL;
    }

public:
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
    void dispaly()
    {
        cout << "\nId : " << this->id << "\tName :" << this->name << "\t Salary :" << this->salary;
    }

} Employee;

int main()
{
    int id;
    char name[20];
    float salary;
    Employee e1, e2;
    // Constructor call
    cout << "\nDefault Values of E1 :";
    e1.dispaly();
    cout << "\nDefault Values of E2 :";
    e2.dispaly();
    // E1 Setters
    cout << "\nSetters For e1";
    cout << "\nEnter ID :";
    cin >> id;
    e1.setId(id);
    cout << "\nEnter Name :";
    cin >> name;
    e1.setName(name);
    cout << "\nEnter Salary :";
    cin >> salary;
    e1.setSalary(salary);
    // Display
    cout << "\nDisaplay e1";
    e1.dispaly();

    // E2 Setters
    cout << "\nSetters For e2";
    cout << "\nEnter ID :";
    cin >> id;
    e2.setId(id);
    cout << "\nEnter Name :";
    cin >> name;
    e2.setName(name);
    cout << "\nEnter Salary :";
    cin >> salary;
    e2.setSalary(salary);
    // Display
    cout << "\nDisaplay e1";
    e2.dispaly();

    // E1 Getters
    cout << "\nGetters E2";
    cout << "\nId : " << e1.getId() << "\tName :" << e1.getName() << "\t Salary :" << e1.getSalary();
    // E2 Getters
    cout << "\nGetters E2";
    cout << "\nId : " << e2.getId() << "\tName :" << e2.getName() << "\t Salary :" << e2.getSalary();
    return 1;
}