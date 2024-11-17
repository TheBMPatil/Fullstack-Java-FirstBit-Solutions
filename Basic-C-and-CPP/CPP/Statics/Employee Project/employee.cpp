#include "employee.h"
#include <string.h>
//#include <string>
#include <iostream>
using namespace std;

// static string 

string Employee::comp_Name = "MyCompany";

Employee::Employee()
{
	// cout << "\nDefault conclassor called\n";
	this->id = 0;
	strcpy(this->name, "No Name");
	this->salary = 0;
}

Employee ::Employee(char *name, int id, float salary)
{
	// cout << "\nParameterized Conclassor for Employee called";
	strcpy(this->name, name);
	this->id = id;
	this->salary = salary;
}

// Setters
void Employee ::setId(int Id)
{
	this->id = Id;
}
void Employee ::setName(char *name)
{
	strcpy(this->name, name);
}
void Employee ::setSalary(float salary)
{
	this->salary = salary;
}
// Getters
int Employee ::getId()
{
	return this->id;
}
char *Employee ::getName()
{
	return this->name;
}
float Employee ::getSalary()
{
	return this->salary;
}

// Display
void Employee ::display()
{
	cout << "\nId : " << this->id << "\tName :" << this->name << "\t Salary :" << this->salary;
}
