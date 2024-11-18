#include "myArray.h"

int main()
{

    int val, size, ele, idx;
    cout << "\nEnter the Size of the Array : ";
    cin >> size;
    MyArray arr(size);

    int ch;
    do
    {
        //      bool insert(int &);
        // bool remove(int &);
        // bool isFull();
        // bool isEmpty();
        // // void display();
        cout << "\n1: Insert Element in array " << endl;
        cout << "2: Remove elemnt  " << endl;
        cout << "3: Diaplay array " << endl;
        cout << "0: toExit" << endl;
        cout << "Enter Your Choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter Element to isert in array : ";
            cin >> ele;
            arr.insert(ele);
            break;

        case 2:
            cout << "\nEnter the index of element you want to delete : ";
            cin >> idx;
            arr.remove(idx);
            break;

        case 3:
            arr.display();
            break;
        }

    } while (ch != 0);

    return 0;
}