#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int &);
    void setData(int &);

    void setNext(Node *);
    void setPrev(Node *);

    int getData();

    Node *getNext();
    Node *getPrev();
};
