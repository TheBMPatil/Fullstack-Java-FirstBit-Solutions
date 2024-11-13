#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Time
{
private:
    int HH;
    int MM;
    int SS;

public:
    Time()
    {
        this->HH = 0;
        this->MM = 0;
        this->SS = 0;
    }
    Time(int h, int m, int s)
    {
        this->HH = h;
        this->MM = m;
        this->SS = s;
    }
    // Getters
    int getHH() { return this->HH; };
    int getMM() { return this->MM; };
    int getSS() { return this->SS; };
    // Setters
    void setHH(int h) { this->HH = h; };
    void setMM(int h) { this->MM = h; };
    void setSS(int h) { this->SS = h; };
    // Display
    void display()
    {
        cout << "Time in HH:MM:SS = " << this->HH << ":" << this->MM << ":" << this->SS;
    }
};

istream &operator>>(istream &in, Time &t1)
{
    int hh, mm, ss;
    cout << "\nEnter Hours :";
    in >> hh;
    cout << "\nEnter Min :";
    in >> mm;
    cout << "\nEnter Sec :";
    in >> ss;
    
    t1.setHH(hh);
    t1.setMM(mm);
    t1.setSS(ss);

    return in;
}

ostream &operator<<(ostream &out, Time &t1)
{
    out << t1.getHH() << endl;
    out << t1.getMM() << endl;
    out << t1.getSS() << endl;
    return out;
}

int main()
{

    Time t1(10, 20, 30);
    // t1.display();
    cout << t1;
    cin >> t1;
    cout << t1;
}