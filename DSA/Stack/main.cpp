#include "stk.h"

int main()
{
    int size;
    cout << "\nEnter Size for Stack : ";
    cin >> size;

    MyStack obj(size);
    int ch, ele;

    do
    {
        cout << "\n1) Push";
        cout << "\n2) Pop";
        cout << "\n3) isEmpty";
        cout << "\n4) isFull";
        cout << "\n5) Peek";
        cout << "\n6) Display";
        cout << "\n0) Exit";
        cout << "\nEnter Your Choice : \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\nEnter Value to be pushed on stack : ";
            cin >> ele;
            bool sts = obj.push(ele);
            cout << "\nPush Status : " << sts;
        }

        break;
        case 2:
        {
            bool x = obj.pop(ele);
            if (x)
            {
                cout << "\nPop status : " << x;
                cout << "\nPopped Element is  : " << ele;
            }
            else
            {
                cout << "\nPop status : " << x;
            }
        }
        break;

        case 3:
        {
            cout << "\nStack empty status : " << obj.isEmpty();
        }
        break;
        case 4:
        {
            cout << "\nStack Full status : " << obj.isFull();
        }
        break;
        case 5:
        {
            obj.peek(ele);
            cout << "\nPeak value: " << ele;
        }
        break;
        case 6:
        {
            obj.display();
        }
        break;
        default:
            break;
        }

    } while (ch != 0);

    return 0;
}