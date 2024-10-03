#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct Printer
{
    Printer operator+(int a)
    {
        printf("%d", a);
        Printer p;
        return p;
    }
    Printer operator+(char a)
    {
        printf("%c", a);
        Printer p;
        return p;
    }
    Printer operator+(char *a)
    {
        printf("%s", a);
        Printer p;
        return p;
    }
};
int main()
{
    Printer mycout;

	mycout+10+" hello"+"\n next line";



return 0;
}