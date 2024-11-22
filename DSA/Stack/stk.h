#include <bits/stdc++.h>
using namespace std;
class MyStack
{
    int size;
    int top;
    int *ptr;

public:
    MyStack(int);

    bool push(int);
    bool pop(int &);
    bool isFull();
    bool isEmpty();
    bool peek(int &);
    void display();
};