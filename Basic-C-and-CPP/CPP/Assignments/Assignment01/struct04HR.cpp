#include <iostream>
#include <string.h>
using namespace std;

typedef struct HR
{
    int id;
    char name[20];
    float salary;
    float commission;

    // Constructor
    HR()
    {
        cout << "\nDefault constructor called\n";
        this->id = 0;
        strcpy(this->name, "No Name");
        this->salary = 0;
        this->commission = 0;
    }
    HR(char *name, int id, float salary, float commission)
    {
        cout << "\nParameterized Constructor for HR called";
        strcpy(this->name, name);
        this->id = id;
        this->salary = salary;
        this->commission = commission;
    }

public:
    // Setters
    void setId(int Id) { this->id = Id; }
    void setName(char *name) { strcpy(this->name, name); }
    void setSalary(float salary) { this->salary = salary; }
    void setCommission(float commission) { this->commission = commission; }

    // Getters
    int getId() { return this->id; }
    char *getName() { return this->name; }
    float getSalary() { return this->salary; }
    float getCommission() { return this->commission; }

    // Display
    void display()
    {
        cout << "\nId : " << this->id << "\tName : " << this->name << "\tSalary : " << this->salary << "\tCommission : " << this->commission;
    }

} HR;

int main()
{
    HR hr1, hr2("Bhagvat", 231, 435332, 2324);
    int id;
    char name[20];
    float salary, commission;

    // Constructor call
    cout << "\nDefault HR1 values:";
    hr1.display();
    // Constructor call
    cout << "\nDefault HR2 values:";
    hr2.display();

    // Setters for HR
    cout << "\nEnter HR ID: ";
    cin >> id;
    hr1.setId(id);

    cout << "Enter HR Name: ";
    cin >> name;
    hr1.setName(name);

    cout << "Enter HR Salary: ";
    cin >> salary;
    hr1.setSalary(salary);

    cout << "Enter HR Commission: ";
    cin >> commission;
    hr1.setCommission(commission);

    // Display HR data
    hr1.display();

    // Getters
    // cout << "\nGetters HR1";
    // cout << "\nId : " << hr1.getId() << "\tName : " << hr1.getName() << "\tSalary : " << hr1.getSalary() << "\tCommission : " << hr1.getCommission();

    // // Setters for HR
    // cout << "\nEnter HR ID: ";
    // cin >> id;
    // hr2.setId(id);

    // cout << "Enter HR Name: ";
    // cin >> name;
    // hr2.setName(name);

    // cout << "Enter HR Salary: ";
    // cin >> salary;
    // hr2.setSalary(salary);

    // cout << "Enter HR Commission: ";
    // cin >> commission;
    // hr2.setCommission(commission);
    // // Getters hr2
    // cout << "\nGetters HR2";
    // cout << "\nId : " << hr2.getId() << "\tName : " << hr2.getName() << "\tSalary : " << hr2.getSalary() << "\tCommission : " << hr2.getCommission();
    // // Display HR data
    // hr2.display();

    return 1;
}
