#include <bits/stdc++.h>
using namespace std;
#ifndef NODE_H
#define NODE_H
#pragma once
template <class T>
class Node {
private:
    T data;
    Node<T>* next;

public:
    Node(T& data);
    void setNext(Node<T>* next);
    Node<T>* getNext();
    T& getData();

};

#endif
