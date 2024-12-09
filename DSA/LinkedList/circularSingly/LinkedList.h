#include "Node.h"
class LinkedList
{
private:
    Node *last;

public:
    LinkedList();

    void setLast(Node *);
    Node *getLast();

    void insertAtPos(int &, int);
    // void insertAtEnd(int &);
    // void insertBeg(int &);
    void display();

    // bool removeFirst(int &);
    // bool removeLast(int &);
    void removeAtPos(int);
};