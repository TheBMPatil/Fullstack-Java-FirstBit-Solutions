#include <iostream>
#include <string.h>
using namespace std;

typedef struct SalesManager
{
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;

    // Constructor
    SalesManager()
    {
        this->id = NULL;
        strcpy(this->name, "No Name");
        this->salary = NULL;
        this->incentive = NULL;
        this->target = NULL;
    }

public:
    // Setters
    void setId(int Id) { this->id = Id; }
    void setName(char *name) { strcpy(this->name, name); }
    void setSalary(float salary) { this->salary = salary; }
    void setIncentive(float incentive) { this->incentive = incentive; }
    void setTarget(int target) { this->target = target; }

    // Getters
    int getId() { return this->id; }
    char *getName() { return this->name; }
    float getSalary() { return this->salary; }
    float getIncentive() { return this->incentive; }
    int getTarget() { return this->target; }

    // Display
    void display()
    {
        cout << "\nId : " << this->id << "\tName : " << this->name
             << "\tSalary : " << this->salary << "\tIncentive : " << this->incentive
             << "\tTarget : " << this->target;
    }

} SalesManager;

int main()
{
    SalesManager sm1, sm2;
    int id, target;
    char name[20];
    float salary, incentive;

    // Constructor call
    cout << "\nDefault SalesManager1 values:";
    sm1.display();
    // Constructor call
    cout << "\nDefault SalesManager2 values:";
    sm2.display();

    // Setters for SalesManager1
    cout << "\nEnter SalesManager ID: ";
    cin >> id;
    sm1.setId(id);

    cout << "Enter SalesManager Name: ";
    cin >> name;
    sm1.setName(name);

    cout << "Enter SalesManager Salary: ";
    cin >> salary;
    sm1.setSalary(salary);

    cout << "Enter SalesManager Incentive: ";
    cin >> incentive;
    sm1.setIncentive(incentive);

    cout << "Enter SalesManager Target: ";
    cin >> target;
    sm1.setTarget(target);

    // Display SalesManager1 data
    sm1.display();

    // Getters for SalesManager1
    cout << "\nGetters SalesManager1";
    cout << "\nId : " << sm1.getId() << "\tName : " << sm1.getName() << "\tSalary : " << sm1.getSalary() << "\tIncentive : " << sm1.getIncentive() << "\tTarget : " << sm1.getTarget();

    // Setters for SalesManager2
    cout << "\nEnter SalesManager ID: ";
    cin >> id;
    sm2.setId(id);

    cout << "Enter SalesManager Name: ";
    cin >> name;
    sm2.setName(name);

    cout << "Enter SalesManager Salary: ";
    cin >> salary;
    sm2.setSalary(salary);

    cout << "Enter SalesManager Incentive: ";
    cin >> incentive;
    sm2.setIncentive(incentive);

    cout << "Enter SalesManager Target: ";
    cin >> target;
    sm2.setTarget(target);

    // Getters SalesManager2
    cout << "\nGetters SalesManager2";
    cout << "\nId : " << sm2.getId() << "\tName : " << sm2.getName() << "\tSalary : " << sm2.getSalary() << "\tIncentive : " << sm2.getIncentive() << "\tTarget : " << sm2.getTarget();

    // Display SalesManager2 data
    sm2.display();

    return 1;
}
