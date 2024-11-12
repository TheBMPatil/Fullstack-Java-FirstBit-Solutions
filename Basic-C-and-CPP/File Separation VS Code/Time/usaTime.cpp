#include <bits/stdc++.h>
#include "usaTime.h"
using namespace std;
namespace usa
{
    // DC
    Time::Time()
    {
        this->HH = 0;
        this->MM = 0;
        this->SS = 0;
    }
    // PC
    Time::Time(int HH, int MM, int SS)
    {
        this->HH = HH;
        this->MM = MM;
        this->SS = SS;
    }

    // getters
    int Time::getHH() { return this->HH; }
    int Time::getMM() { return this->MM; }
    int Time::getSS() { return this->SS; }

    // Setters

    void Time::setHH(int HH) { this->HH = HH; }
    void Time::setMM(int MM) { this->MM = MM; }
    void Time::setSS(int SS) { this->SS = SS; }

    // Display
    void Time::display()
    {
        cout << "Time in HH:MM:SS : " << HH << ":" << MM << ":" << SS;
    }
}