#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int &);
    void setData(int &);
    void setNext(Node *);
    int getData();
    Node *getNext();
};
