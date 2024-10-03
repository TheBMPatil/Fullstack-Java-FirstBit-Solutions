#include <iostream>
#include <string.h>
using namespace std;
typedef struct Admin
{
    // id,name,salary,allowence
    int id;
    char name[20];
    float salary;
    float allowence;

    // Construuctor
    Admin()
    {
        cout << "\nDefault constructor called\n";
        this->id = 00;
        strcpy(this->name, "NoName");
        this->salary = 00;
        this->allowence = 00;
    }

    Admin(char *name, int id, float salary, float allowence)
    {
        cout << "\nParameterized Constructor for Admin called";
        strcpy(this->name, name);
        this->id = id;
        this->salary = salary;
        this->allowence = allowence;
    }

public:
    // Setters
    void setId(int id) { this->id = id; }
    void setName(char name[]) { strcpy(this->name, name); }
    void setSalary(float salary) { this->salary = salary; }
    void setAllowence(float allowence) { this->allowence = allowence; }

    // Display
    void display()
    {
        cout << "\n\nId :" << this->id << "\tName :" << this->name << "\tSalary" << this->salary << "\tAllowence :" << this->allowence;
    }

    // getters
    int getId() { return this->id; }
    char *getName() { return this->name; }
    float getSalary() { return this->salary; }
    float getAllowence() { return this->allowence; }
} Admin;

int main()
{
    Admin Admin1, Admin2("Bhagvat", 96, 75599999, 230000);
    int id;
    char name[20];
    float salary, allowence;

    // Constructor call
    cout << "\nDefault Admin1 values:";
    Admin1.display();
    // Constructor call
    cout << "\nDefault Admin2 values:";
    Admin2.display();

    // Setters for Admin
    cout << "\nEnter Admin ID: ";
    cin >> id;
    Admin1.setId(id);

    cout << "Enter Admin Name: ";
    cin >> name;
    Admin1.setName(name);

    cout << "Enter Admin Salary: ";
    cin >> salary;
    Admin1.setSalary(salary);

    cout << "Enter Admin allowence: ";
    cin >> allowence;
    Admin1.setAllowence(allowence);

    cout << "\nAdmin1 Display";
    // Display Admin data
    Admin1.display();

    // // Getters
    // cout << "\nGetters Admin1";
    // cout << "\nId : " << Admin1.getId() << "\tName : " << Admin1.getName() << "\tSalary : " << Admin1.getSalary() << "\tallowence : " << Admin1.getAllowence();

    // // Setters for Admin
    // cout << "\nEnter Admin ID: ";
    // cin >> id;
    // Admin2.setId(id);

    // cout << "Enter Admin Name: ";
    // cin >> name;
    // Admin2.setName(name);

    // cout << "Enter Admin Salary: ";
    // cin >> salary;
    // Admin2.setSalary(salary);

    // cout << "Enter Admin allowence: ";
    // cin >> allowence;
    // Admin2.setAllowence(allowence);
    // // Getters Admin2
    // cout << "\nGetters Admin2";
    // cout << "\nId : " << Admin2.getId() << "\tName : " << Admin2.getName() << "\tSalary : " << Admin2.getSalary() << "\tallowence : " << Admin2.getAllowence();
    // // Display Admin data
    // cout << "\n\nAdmin2 Display";
    // Admin2.display();

    return 1;
}