#include "Node.h"

Node::Node(int &data)
{
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
}
void Node::setData(int &data) { this->data = data; }
void Node::setNext(Node *next) { this->next = next; }
void Node::setPrev(Node *prev) { this->prev = prev; }
int Node::getData() { return this->data; }
Node *Node::getNext() { return this->next; }
Node *Node::getPrev() { return this->prev; }
