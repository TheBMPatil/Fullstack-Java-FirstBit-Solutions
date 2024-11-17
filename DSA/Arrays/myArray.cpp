#include "myArray.h"

MyArray::MyArray(int size)
{
    this->size = size;
    arr = new int[size]{0};
}

void MyArray::display()
{
    for (int i = 0; i < this->size; i++)
    {
        cout << " [ " << arr[i] << " ] ";
    }
}
