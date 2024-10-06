#include <iostream>
using namespace std;

class Printer
{
public:
    // void print()
    virtual void print()
    {
        cout << "\nPrinter print";
    }
};

class InkjetPrinter : public Printer
{
public:
    void print()
    {
        cout << "\nInkjetPrinter  print";
    }
};

class LaserPrinter : public Printer
{
public:
    void print()
    {
        cout << "\nLaserPrinter  print";
    }
};

class DotMatrixPrinter : public Printer
{
public:
    void print()
    {
        cout << "\nDotMatrixPrinter print";
    }
};

int main()
{
    Printer *Printers[10];
    for (int i = 0; i < 10; i++)
    {
        if (i / 2 == 0)
        {
            Printers[i] = new InkjetPrinter();
        }
        else if (i % 2 == 0)
        {
            Printers[i] = new LaserPrinter();
        }
        else
        {
            Printers[i] = new DotMatrixPrinter();
        }
    }

    for (int i = 0; i < 10; i++)
        Printers[i]->print();

    return 0;
}