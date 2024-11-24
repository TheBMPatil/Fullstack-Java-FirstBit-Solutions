#include "que.h"

int main()
{

    int size;
    cout << "\nEnter Size";
    cin >> size;
    char ele;

    CircularQueue cq(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter A Character : ";
        cin >> ele;
        cq.enQueue(ele);
    }

    cq.display();
    return 0;
}