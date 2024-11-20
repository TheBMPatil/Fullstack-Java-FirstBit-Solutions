#include "myArray.h"

MyArray::MyArray(int size)
{
    this->size = size;
    arr = new int[size]{0};
    this->index = -1;
}

MyArray::MyArray(MyArray &obj)
{
    cout << "Inside copy Const..\n";
    this->index = obj.index;
    this->size = obj.size;
    this->arr = new int[this->size];

    for (int i = 0; i < this->size; i++)
    {
        this->arr[i] = obj.arr[i];
    }
}

bool MyArray::isEmpty()
{
    if (index == -1)
    {
        cout << "\nArray Is Empty..!";
        return true;
    }
    return false;
}

bool MyArray::isFull()
{
    if (index == size - 1)
    {
        cout << "\nArray Is Full..!";
        return true;
    }
    return false;
}

bool MyArray::insert(int &element)
{
    if (isFull())
    {
        return false;
    }
    arr[++index] = element;
    return true;
}

bool MyArray::remove(int &idx)
{
    if (isEmpty())
    {
        return false;
    }
    for (int i = idx; i < index; i++)
    {
        arr[i] = arr[i + 1];
    }
    this->index = this->index - 1;
    return true;
}

void MyArray::display()
{
    if (isEmpty())
    {
        // cout << "\nArray Is EMPTY....!!\n";
        return;
    }
    for (int i = 0; i <= this->index; i++)
    {
        cout << " [ " << arr[i] << " ] ";
    }
}

MyArray::~MyArray()
{
    delete[] arr;
    cout << "\nArray Deleted..";
}