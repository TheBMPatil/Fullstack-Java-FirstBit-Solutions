#include "empArr.h"
#include "emp.h"
int main()
{

    int val, size, id, idx;
    string name;
    double salary;
    cout << "\nEnter the Size of the Array : ";
    cin >> size;

    EmpArr arr(size);

    int ch;
    do
    {
        //      bool insert(int &);
        // bool remove(int &);
        // bool isFull();
        // bool isEmpty();
        // // void display();
        cout << "\n1: Insert Employee in array " << endl;
        // cout << "2: Remove elemnt  " << endl;
        cout << "3: Diaplay array " << endl;
        cout << "0: toExit" << endl;
        cout << "Enter Your Choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\nEnter ID Of Employee : ";
            cin >> id;
            cout << "\nEnter Name Of Employee : ";
            cin >> name;
            cout << "\nEnter Salary Of Employee : ";
            cin >> salary;
            Employee mainEmp(id, name, salary);
            arr.insertEmp(mainEmp);
        }
        break;
        case 2:
            cout << "Case 2 na bhaii";
            break;
        case 3:
            arr.displayEmpArr();
            break;
        }
    } while (ch != 0);

    return 0;
}