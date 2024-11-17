#include <iostream>
#include "employee.h"
using namespace std;

int main() {
	Employee emp("JVjhasd", 668, 3242);
	cout << "\nCompany Name : " << Employee::comp_Name << endl;

	emp.display();
	return 0;
}