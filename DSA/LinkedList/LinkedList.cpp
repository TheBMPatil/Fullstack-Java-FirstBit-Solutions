#include "LinkedList.h"
// To insert At beginning
// 1) Create a new node
// 2) themp->setNext(start);
// 3) start = temp;

LinkedList::LinkedList()
{
    start = NULL;
}

void LinkedList::setStart(Node *start) { this->start = start; }
Node *LinkedList::getStart() { return this->start; }

void LinkedList::insertBeg(int &data)
{
    Node *temp = new Node(data);
    temp->setNext(start);
    start = temp;
}

void LinkedList::display()
{
    if (start != NULL)
    {
        Node *runner = start;
        cout << "\nLinkedList : \n";
        cout << "START ->";
        while (runner != NULL)
        {
            cout << " [ " << runner->getData() << " ] ->";
            runner = runner->getNext();
        }
        cout << " END";
        return;
    }
    cout << "\nNo data To display....!";
}

void LinkedList::insertAtPos(int &x, int pos)
{
    Node *temp = new Node(x);
    if (start == NULL || pos == 1)

    {
        temp->setNext(start);
        start = temp;
        return;
    }

    int cnt = 1;
    Node *runner = start;
    while (cnt < pos - 1 && runner->getNext() != NULL)
    {
        runner = runner->getNext();
        cnt++;
    }
    temp->setNext(runner->getNext());
    runner->setNext(temp);
}

void LinkedList::insertAtEnd(int &x)
{
    Node *temp = new Node(x);
    if (start == NULL)
    {
        start = temp;
        return;
    }
    Node *runner = start;
    while (runner->getNext() != NULL)
        runner = runner->getNext();

    runner->setNext(temp);
}

bool LinkedList::removeFirst(int &X)
{
    if (start != NULL)
    {
        X = start->getData();
        start = start->getNext();
        return true;
    }
    return false;
}

bool LinkedList::removeLast(int &X)
{
    if (start != NULL)
    {
        Node *runner = start;
        while (runner->getNext()->getNext() != NULL)
        {
            runner = runner->getNext();
        }
        X = runner->getNext()->getData();
        runner->setNext(NULL);
        return true;
    }
    return false;
}
bool LinkedList::removeAtPos(int &X, int pos)
{
    if (start == NULL)
    {
        return false;
    }
    if (pos == 1)
    {
        removeFirst(X);
        return true;
    }
    Node *runner = start;
    int count = 1;
    while (count < pos - 1)
    {
        runner = runner->getNext();
        count++;
    }
    X = runner->getNext()->getData();
    runner->setNext(runner->getNext()->getNext());
    return true;
}