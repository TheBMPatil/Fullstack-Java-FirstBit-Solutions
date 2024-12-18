#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;
#pragma once
template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList();
    ~LinkedList();

    void add(const T& data);
    void remove(const T& data);
    T* find(const T& data);
    void display() const;
    void clear();
    void sort(); 
    
    Node<T>* getHead();
    void setHead(Node<T>*);
};

// #include "LinkedList.cpp" // Include implementation file here

#endif
