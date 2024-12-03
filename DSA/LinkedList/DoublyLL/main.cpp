#include "LinkedList.h"

int main()
{

    LinkedList ls;
    int data, ch, pos;

    do
    {
        cout << "\n\n===================== MENU ====================";
        cout << "\n1) Display Linkedlist \t2) Insert At Position  ";
        // cout << "\n3) Insert At End      \t4) Insert at Position";
        //  cout << "\n5) Remove first       \t6) Remove Last";
        cout << "\n3) Display reverse         \t0)EXIT\n::";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            ls.display();
        }
        break;

        case 2:
        {
            cout << "\nEnter Data to Insert :";
            cin >> data;
            cout << "\nEnter Position to Insert at :";
            cin >> pos;
            ls.insertAtPos(data, pos);
        }
        break;
        case 3:
        {
            ls.displayREV();
        }
        break;
        case 0:
            cout << "\n===============================================================================\n________________EXITING________________\n===============================================================================";
            break;
        default:
            cout << "\n Invalid Choice................!";
            break;
        }
    } while (ch != 0);

    return 0;
}