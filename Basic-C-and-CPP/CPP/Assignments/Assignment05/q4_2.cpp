#include <iostream>
using namespace std;

class Sorter
{
public:
    // void  sort()
    virtual void sort()
    {
        cout << "\nSorter  sort";
    }
};

class QuickSort : public Sorter
{
public:
    void sort()
    {
        cout << "\nQuickSort   sort";
    }
};

class BubbleSort : public Sorter
{
public:
    void sort()
    {
        cout << "\nBubbleSort   sort";
    }
};

class MergeSort : public Sorter
{
public:
    void sort()
    {
        cout << "\nMergeSort  sort";
    }
};

int main()
{
    Sorter *Sorters[10];
    for (int i = 0; i < 10; i++)
    {
        if (i / 2 == 0)
        {
            Sorters[i] = new QuickSort();
        }
        else if (i % 2 == 0)
        {
            Sorters[i] = new BubbleSort();
        }
        else
        {
            Sorters[i] = new MergeSort();
        }
    }

    for (int i = 0; i < 10; i++)
    {
        Sorters[i]->sort();
    }

    return 0;
}