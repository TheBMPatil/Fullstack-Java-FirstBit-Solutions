#include "myArray.h"

MyArray::MyArray(int size)
{
    this->size = size;
    arr = new int[size]{0};
    this->index = -1;
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
    for (int i = 0; i < this->size; i++)
    {
        cout << " [ " << arr[i] << " ] ";
    }
}
