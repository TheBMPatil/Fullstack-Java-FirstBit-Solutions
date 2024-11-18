#include <bits/stdc++.h>
using namespace std;

#include "emp.h"

class EmpArr
{
    int size, index;
    Employee *emp;

public:
    EmpArr(int);
    void displayEmpArr();
    bool insertEmp(Employee &);
    bool isFull();
    bool isEmpty();
};