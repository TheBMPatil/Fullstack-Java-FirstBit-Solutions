#include "Node.h"

Node::Node(int &data)
{
    this->data = data;
    this->next = nullptr;
}
void Node::setData(int &data) { this->data = data; }
void Node::setNext(Node *next) { this->next = next; }
int Node::getData() { return this->data; }
Node *Node::getNext() { return this->next; }
