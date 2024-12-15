#include <bits/stdc++.h>
using namespace std;
template <class T>
class MyStack
{
    int size;
    int top;
    T *ptr;

    public:

        MyStack(int);

        bool push(T);
        bool pop(T &);
        bool isFull();
        bool isEmpty();
        bool peek(T &);
        void display();
};