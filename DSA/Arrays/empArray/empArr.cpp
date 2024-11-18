#include "empArr.h"

EmpArr::EmpArr(int size)
{
    this->size = size;
    this->index = -1;
}

void EmpArr::displayEmpArr()
{
    for (int i = 0; i <= index; i++)
    {
        emp[i].displayEmployee();
    }
}

bool EmpArr::insertEmp(Employee &tempemp)
{
    if (isFull())
    {
        return false;
    }

    this->emp[index++] = tempemp;
    return true;
}

bool EmpArr::isEmpty()
{
    if (index == -1)
    {
        cout << "\nArray Is Empty..!";
        return true;
    }
    return false;
}

bool EmpArr::isFull()
{
    if (index == size - 1)
    {
        cout << "\nArray Is Full..!";
        return true;
    }
    return false;
}
