#include "LinkedList.h"
LinkedList::LinkedList()
{
    start = NULL;
}

void LinkedList::setStart(Node *start) { this->start = start; }
Node *LinkedList::getStart() { return this->start; }

void LinkedList::display()
{
    if (start != NULL)
    {
        Node *runner = start;
        cout << "\nLinkedList : \n";
        cout << "START ->";

        do
        {
            cout << " [ " << runner->getData() << " ] ->";
            runner = runner->getNext();
        } while (runner != NULL);
        cout << " END";
        return;
    }
    cout << "\nNo data To display....!";
}
void LinkedList::displayREV()
{
    if (start != NULL)
    {
        Node *runner = start;
        cout << "\nLinkedList : \n";
        while (runner->getNext() != nullptr)
        {
            runner = runner->getNext();
        }

        cout << "END ";
        do
        {
            cout << " <- [ " << runner->getData() << " ] ";
            runner = runner->getPrev();
        } while (runner != NULL);
        cout << " <- START ";
        return;
    }
    cout << "\nNo data To display....!";
}

void LinkedList::removeAtPos(int pos)
{
    if (start == nullptr)
    {
        cout << "\nList is Empty..!";
        return;
    }
    Node *runner = start;
    
    if (pos==1)
    {

    }
    
}
void LinkedList::insertAtPos(int &x, int pos)
{

    Node *temp = new Node(x);
    if (start == nullptr)
    {
        start = temp;

        return;
    }
    if (pos == 1)
    {
        temp->setNext(start);
        start->setPrev(temp);
        start = temp;
        return;
    }
    Node *runner = start;
    int count = 1;

    while (count < pos - 1 && runner->getNext() != nullptr)
    {
        runner = runner->getNext();
        count++;
    }
    if (pos > count + 1)
    {
        temp->setPrev(runner);
        runner->setNext(temp);
        return;
    }
    temp->setNext(runner->getNext());
    temp->setPrev(runner);
    runner->setNext(temp);

    if (runner->getNext() != nullptr)
    {
        temp->getNext()->setPrev(temp);
    }
}
