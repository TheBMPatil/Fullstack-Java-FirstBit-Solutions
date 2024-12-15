#include "stk.h"
template <class T>
MyStack<T>::MyStack(int size)
{
    this->size = size;
    this->ptr = new T[size];
    this->top = -1;
}


template <class T>
bool MyStack<T>::push(T ele)
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
template <class T>
bool MyStack<T>::pop(T &ele)
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
template <class T>
bool MyStack<T>::isFull()
{
    return top == size - 1;
}
template <class T>
bool MyStack<T>::isEmpty()
{
    return top == -1;
}
template <class T>
bool MyStack<T>::peek(T &ele)
{
    if (!isEmpty())
    {
        ele = ptr[top];
        return true;
    }
    return false;
}

template <class T>
void MyStack<T>::display()
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
