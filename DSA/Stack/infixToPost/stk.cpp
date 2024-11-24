#include "stk.h"

MyStack::MyStack(int size)
{
    this->size = size;
    this->ptr = new char[size];
    this->top = -1;
}

bool MyStack::push(char ele)
{
    if (isFull())
    {
        cout << "\nStack OverFlow";
        return false;
    }
    top += 1;
    ptr[top] = ele;
    return true;
}
bool MyStack::pop(char &ele)
{
    if (isEmpty())
    {
        cout << "\nStack underFlow";
        return false;
    }
    ele = ptr[top];
    top--;
    return true;
}
bool MyStack::isFull()
{
    return top == size - 1;
}
bool MyStack::isEmpty()
{
    return top == -1;
}
bool MyStack::peek(char &ele)
{
    if (!isEmpty())
    {
        ele = ptr[top];
        return true;
    }
    return false;
}