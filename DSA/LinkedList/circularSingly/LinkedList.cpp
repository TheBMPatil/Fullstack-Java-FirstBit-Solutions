#include "LinkedList.h"

LinkedList::LinkedList()
{
    last = NULL;
}

void LinkedList::setLast(Node *start) { this->last = start; }
Node *LinkedList::getLast() { return this->last; }

// void LinkedList::insertBeg(int &data)
// {
//     Node *temp = new Node(data);
//     temp->setNext(start);
//     start = temp;
// }

void LinkedList::display()
{
    if (last != NULL)
    {
        Node *runner = last->getNext(); // Start from the first node
        cout << "\nLinkedList : \n";
        cout << "START ->";

        do
        {
            cout << " [ " << runner->getData() << " ] ->";
            runner = runner->getNext();
        } while (runner != last->getNext()); // Stop when we loop back to the first node

        cout << " END";
        return;
    }
    cout << "\nNo data To display....!";
}

// void LinkedList::display()
// {
//     if (last != NULL)
//     {
//         Node *runner = last->getNext();
//         cout << "\nLinkedList : \n";
//         cout << "START ->";
//         while (runner != last)
//         {
//             cout << " [ " << runner->getData() << " ] ->";
//             runner = runner->getNext();
//         }
//         cout << " END";
//         return;
//     }
//     cout << "\nNo data To display....!";
// }

void LinkedList::insertAtPos(int &x, int pos)
{
    Node *temp = new Node(x);

    // If List is empty..
    if (last == NULL)

    {
        last = temp;
        last->setNext(temp);
        return;
    }

    int cnt = 1;
    Node *runner = last->getNext();

    // If Positon given by user is 1
    if (pos == 1)
    {
        temp->setNext(runner);
        last->setNext(temp);
        return;
    }
    // For other
    while (cnt < pos - 1 && runner != last)
    {
        runner = runner->getNext();
        cnt++;
    }

    // For valid position

    temp->setNext(runner->getNext());
    runner->setNext(temp);

    if (runner == last)
    // only when invalid position is given and to be added to the last
    {
        last = temp;
    }
}

// void LinkedList::insertAtEnd(int &x)
// {
//     Node *temp = new Node(x);
//     if (start == NULL)
//     {
//         start = temp;
//         return;
//     }
//     Node *runner = start;
//     while (runner->getNext() != NULL)
//         runner = runner->getNext();

//     runner->setNext(temp);
// }

// bool LinkedList::removeFirst(int &X)
// {
//     if (start != NULL)
//     {
//         X = start->getData();
//         start = start->getNext();
//         return true;
//     }
//     return false;
// }

// bool LinkedList::removeLast(int &X)
// {
//     if (start != NULL)
//     {
//         Node *runner = start;
//         while (runner->getNext()->getNext() != NULL)
//         {
//             runner = runner->getNext();
//         }
//         X = runner->getNext()->getData();
//         runner->setNext(NULL);
//         return true;
//     }
//     return false;
// }
// void LinkedList::removeAtPos(int pos)
// {
//     if (last == NULL)
//     {
//         return;
//     }
//     if (pos == 1)
//     {
//         // removeFirst(X);
//         return;
//     }
//     Node *runner = last->getNext();
//     int count = 1;
//     while (count < pos - 1)
//     {
//         runner = runner->getNext();
//         count++;
//     }
//     runner->getNext()->getData();
//     runner->setNext(runner->getNext()->getNext());
//     return;
// }

void LinkedList::removeAtPos(int pos)
{
    if (last == NULL)
    {
        cout << "The list is empty. Nothing to remove.\n";
        return;
    }
    Node *Runner = last->getNext();

    if (pos == 1)
    {
        if (last == Runner)
        {
            delete last;
            last=nullptr;
            return;
        }

        last->setNext(Runner->getNext());
        delete Runner;
        return;
    }
    int count = 1;
    
}

//  // Handle removal of the first node
//     if (pos == 1)
//     {
//         Node *toDelete = last->getNext(); // First node in the circular linked list
//         if (toDelete == last)
//         {
//             // Only one node in the list
//             last = NULL;
//         }
//         else
//         {
//             last->setNext(toDelete->getNext());
//         }
//         delete toDelete;
//         return;
//     }

//     // Traverse to the node just before the position
//     Node *runner = last->getNext();
//     int count = 1;

//     while (count < pos - 1 && runner->getNext() != last->getNext())
//     {
//         runner = runner->getNext();
//         count++;
//     }

//     // Check if the position is valid
//     if (runner->getNext() == last->getNext())
//     {
//         cout << "Invalid position. Node does not exist at position " << pos << ".\n";
//         return;
//     }

//     Node *toDelete = runner->getNext();
//     runner->setNext(toDelete->getNext());

//     // Update `last` if the removed node is the last node
//     if (toDelete == last)
//     {
//         last = runner;
//     }

//     delete toDelete; // Free memory