#include "Node.h"
class LinkedList
{
private:
    Node *start;

public:
    LinkedList();

    void setStart(Node *);
    Node *getStart();

    void insertAtPos(int &, int);
    // void insertAtEnd(int &);
    // void insertBeg(int &);
    void display();
    void displayREV();

    // bool removeFirst(int &);
    // bool removeLast(int &);
    void removeAtPos(int);
};