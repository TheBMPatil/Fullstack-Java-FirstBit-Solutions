#include <bits/stdc++.h>
using namespace std;

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
