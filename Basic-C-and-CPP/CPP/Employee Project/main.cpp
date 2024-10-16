#include <iostream>
#include "employee.h"
using namespace std;
class SalesManager:public Employee
{
	
};
int main() {
	Employee emp("JVjhasd",668,3242);
	
	
	Employee* ep[10];
	
	SalesManager sm;
	
	ep[0]=&sm;
	cout<<&sm<<"\n";

	emp.display();
	return 0;
}