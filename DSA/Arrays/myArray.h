#include <bits/stdc++.h>
using namespace std;

class MyArray
{
private:
    int *arr;
    int size;
    int index;

public:
    // Copy Constructor
    MyArray(MyArray &);

    MyArray(int);
    bool insert(int &);
    bool remove(int &);
    bool isFull();
    bool isEmpty();
    void display();

    ~MyArray();
};