
#include <string.h>

class Employee
{
private:
	int id;
	char name[20];
	float salary;
	static string comp_Name;

public:
	
	Employee();
	Employee(char *, int, float);

	// Setters
	void setId(int);
	void setName(char *);
	void setSalary(float);

	// Getters
	int getId();
	char *getName();
	float getSalary();

	// Display
	void display();
};