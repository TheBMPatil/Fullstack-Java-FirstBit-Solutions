#include "que.h"

CircularQueue::CircularQueue(int size)
{
    this->size = size;
    front = -1;
    rear = -1;
    Queue = new char[size];
}
bool CircularQueue::isEmpty()
{
    return this->rear == -1 && this->rear == -1;
}
bool CircularQueue::isFull()
{
    return ((this->rear == this->size - 1 && this->front == 0) || this->front == rear + 1);
}
bool CircularQueue::enQueue(char &ele)
{
    if (!isFull())
    {
        if (isEmpty())
        {
            this->rear = 0;
            this->front = 0;
        }
        else if (this->rear = this->size - 1)
        {
        }
        else
        {
            this->rear++;
        }
        this->Queue[this->rear] = ele;
        return true;
    }
    return false;
}
bool CircularQueue::deQueue(char &ele)
{
    if (!isEmpty())
    {
        ele = this->Queue[this->front];
        if (this->rear == this->front)
        {
            this->rear = this->front = -1;
        }
        else if (this->front == this->size - 1)
        {
            this->front = 0;
        }
        else
        {

            front++;
        }

        return true;
    }
    return false;
}
void CircularQueue::display()
{

    int i = this->front;
    while (i != this->rear)
    {
        cout << " " << this->Queue[i];
        if (i == size - 1)
        {
            i = 0;
        }
        else
        {
            i++;
        }
    }
}