#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList()
{
    this->head = nullptr;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    clear();
}

template <typename T>
void LinkedList<T>::add(const T &data)
{
    Node<T> *newNode = new Node<T>(const_cast<T &>(data));
    if (!head)
    {
        head = newNode;
    }
    else
    {
        Node<T> *temp = head;
        while (temp->getNext())
        {
            temp = temp->getNext();
        }
        temp->setNext(newNode);
    }
}

template <typename T>
void LinkedList<T>::remove(const T &data)
{
    Node<T> *temp = head;
    Node<T> *prev = nullptr;

    while (temp)
    {
        if (temp->data == data)
        { // Use direct equality comparison
            if (!prev)
            {
                head = temp->getNext();
            }
            else
            {
                prev->setNext(temp->getNext());
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->getNext();
    }
}

template <typename T>
T *LinkedList<T>::find(const T &data)
{
    Node<T> *temp = head;
    while (temp)
    {
        if (temp->data == data)
        { // Use direct equality comparison
            return &(temp->data);
        }
        temp = temp->getNext();
    }
    return nullptr;
}

template <typename T>
void LinkedList<T>::display() const
{
    Node<T> *temp = head;
    while (temp)
    {
        cout << temp->getData() << " "; // Simple output to console
        temp = temp->getNext();
    }
    cout << endl;
}

template <typename T>
Node<T> *LinkedList<T>::getHead()
{
    return this->head;
}

template <typename T>
void LinkedList<T>::setHead(Node<T> *head)
{
    this->head = head;
}

template <typename T>
void LinkedList<T>::clear()
{
    while (head)
    {
        Node<T> *temp = head;
        head = head->getNext();
        delete temp;
    }
}

template <typename T>
void LinkedList<T>::sort()
{
    if (!head || !head->getNext())
        return;

    bool swapped;
    do
    {
        swapped = false;
        Node<T> *temp = head;
        while (temp->getNext())
        {
            if (temp->data > temp->getNext()->data)
            { // Ascending order comparison
                swap(temp->data, temp->getNext()->data);
                swapped = true;
            }
            temp = temp->getNext();
        }
    } while (swapped);
}
