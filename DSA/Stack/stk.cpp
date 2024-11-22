#include "stk.h"

MyStack::MyStack(int size)
{
    this->size = size;
    this->ptr = new int[size];
    this->top = -1;
}

bool MyStack::push(int ele)
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
bool MyStack::pop(int &ele)
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
bool MyStack::peek(int &ele)
{
    if (!isEmpty())
    {
        ele = ptr[top];
        return true;
    }
    return false;
}
void MyStack::display()
{
    // cout << "\nInside Display Fun :";
    if (!isEmpty())
    {
        for (int i = 0; i < top; i++)
        {
            cout << "| " << ptr[i] << " |" << endl;
        }
        cout << "_______";
    }
}
