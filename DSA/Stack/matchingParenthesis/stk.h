#include <bits/stdc++.h>
#include<string.h>
using namespace std;
class MyStack
{
    int size;
    int top;
    char *ptr;

public:
    MyStack(int);

    bool push(char);
    bool pop(char &);
    bool isFull();
    bool isEmpty();
    bool peek(char &);
};