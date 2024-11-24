#include <bits/stdc++.h>

using namespace std;

class CircularQueue
{
    int front, rear;
    int size;
    char *Queue;

public:
    CircularQueue(int);
    bool isEmpty();
    bool isFull();
    bool enQueue(char &);
    bool deQueue(char &);
    void display();
};
