#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int id;
    char name[20];
    float salary;
    // Conclassor

public:
    Employee()
    {
        // cout << "\nDefault conclassor called\n";
        this->id = 0;
        strcpy(this->name, "No Name");
        this->salary = 0;
    }

    Employee(char *name, int id, float salary)
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
};

class SalesManager : public Employee
{
private:
    float incentive;
    int target;

public:
    // Conclassor
    SalesManager()
    {
        // cout << "\nDefault conclassor called\n";

        this->incentive = 0;
        this->target = 0;
    }

    SalesManager(char *name, int id, float salary, float incentive, int target) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Conclassor for SalesManager called";

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
        cout << "\nIncentive : " << this->incentive << "\tTarget : " << this->target;
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
        // cout << "\nDefault conclassor called Admin\n";
        this->allowence = 00;
    }

    Admin(char *name, int id, float salary, float allowence) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Conclassor for Admin called";

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
        cout << "\nAllowence :" << this->allowence;
    }

    // getters

    float getAllowence()
    {
        return this->allowence;
    }
};

class HR : public Employee
{
private:
    float commission;

public:
    // Conclassor
    HR()
    {
        // cout << "\nDefault conclassor called HR\n";
        this->commission = 0;
    }
    HR(char *name, int id, float salary, float commission) : Employee(name, id, salary)
    {
        // cout << "\nParameterized Conclassor for HR called";

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
    AreaSalesManager(char *name, int id, float salary, float incentive, int target, char *location) : SalesManager(name, id, salary, incentive, target)
    {
        // cout << "\nParameterized Conclassor for AreaSalesManager called";
        strcpy(this->location, location);
    }

    void display()
    {
        SalesManager::display();
        cout << "\nLocation :" << this->location;
    }
};

int main()
{
    Employee *emp[5];
    emp[0] = new SalesManager("Bhagvat", 123, 500000, 1200, 22);
    emp[1] = new AreaSalesManager("Bhagvat", 123, 690000, 1200, 2, "Pune");
    emp[2] = new HR("Pinto", 124, 560000, 345);
    emp[3] = new Admin("Teja", 122, 780000, 3233);
    for (int i = 0; i < 4; i++)
    {
        cout<<emp[i]->getId()<<"\n";
        cout<<emp[i]->getName()<<"\n";
        cout<<emp[i]->getSalary()<<"\n";

        
 SalesManager* sm=(SalesManager*) dynamic_cast<SalesManager*>(emp[i]);
       if(sm!=NULL) {
	   
       cout<<sm->getIncentive()<<"\n";
       cout<<sm->getTarget()<<"\n";
  		}
   
   HR* hr=(HR*) dynamic_cast<HR*>(emp[i]);
   if(hr!=NULL) 
   {
       cout<<hr->getCommission()<<"\n";
      
  }
  
//   if(strcmp(typeid(*emp[i]).name(),typeid(Admin).name())==0) {
//  
//  
//        Admin* admin=(Admin*)emp[i];
//       cout<<admin->getAllowence()<<"\n\n";
//       
//        
//    }
cout<<"\n\n";
}
    return 1;
}