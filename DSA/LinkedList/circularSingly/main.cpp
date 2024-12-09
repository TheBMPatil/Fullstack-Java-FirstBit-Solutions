#include "LinkedList.h"

int main()
{

    LinkedList ls;
    int data, ch, pos;
    // // cout << "\nStart : " << ls.getStart();
    // ls.insertBeg(data);
    // data = 10;
    // ls.insertBeg(data);
    // data = 30;
    // ls.insertBeg(data);
    // data = 50;
    // ls.insertBeg(data);
    // // cout << "\nAfter insert start : " << ls.getStart();

    // ls.display();

    do
    {
        cout << "\n\n===================== MENU ====================";
        cout << "\n1) Display Linkedlist \t2) Insert At Begining ";
        // cout << "\n3) Insert At End      \t4) Insert at Position";
        // cout << "\n5) Remove first       \t6) Remove Last";
        cout << "\n3)Insert At Position         \t0)EXIT\n::";
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
            // ls.insertBeg(data);
        }
        break;
        // case 3:
        // {
        //     cout << "\nEnter Data to Insert :";
        //     cin >> data;
        //     // ls.insertAtEnd(data);
        // }
        // break;
        case 3:
        {
            cout << "\nEnter Data to Insert :";
            cin >> data;
            cout << "\nEnter Position to Insert at :";
            cin >> pos;
            ls.insertAtPos(data, pos);
        }
        break;
        // case 5:
        // {
        //     if (ls.removeFirst(data))
        //     {
        //         cout << "\nDeleted data : " << data;
        //     }
        //     else
        //     {
        //         cout << "\nLinkedList is Empty...";
        //     }
        // }
        // break;
        // case 6:
        // {
        //     if (ls.removeLast(data))
        //     {
        //         cout << "\nDeleted data : " << data;
        //     }
        //     else
        //     {
        //         cout << "\nLinkedList is Empty...";
        //     }
        // }
        // break;
        // case 7:
        // {
        //     cout << "\nEnter Position to Delete From :";
        //     cin >> pos;
        //     if (ls.removeAtPos(data, pos))
        //     {
        //         cout << "\nDeleted data : " << data;
        //     }
        //     else
        //     {
        //         cout << "\nLinkedList is Empty...";
        //     }
        // }
        // break;
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
