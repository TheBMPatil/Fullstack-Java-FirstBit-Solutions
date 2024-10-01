#include <iostream>
#include <string.h>
using namespace std;
typedef struct Time
{
    int hour;
    int min;
    int sec;

    // Constructor
    Time()
    {
        cout << "\nDefault constructor called\n";
        this->hour = 0;
        this->min = 0;
        this->sec = 0;
    }
    Time(int hour, int min, int sec)
    {
        cout << "\nParameterized Constructor for Time called";
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

public:
    // Setters
    void setHour(int h) { this->hour = h; }
    void setMin(int m) { this->min = m; }
    void setSec(int s) { this->sec = s; }

    // Getters
    int getHour() { return this->hour; }
    int getMin() { return this->min; }
    int getSec() { return this->sec; }

    // Display
    void display()
    {
        cout << "\nTime: " << this->hour << ":" << this->min << ":" << this->sec;
    }

} Time;

int main()
{
    Time time1, time2(12, 32, 43);
    int hour, min, sec;

    // Constructor call
    cout << "\nDefault Time1 values:";
    time1.display();
    // Constructor call
    cout << "\nDefault Time2 values:";
    time2.display();

    // Setters for Time1
    cout << "\nEnter Hour: ";
    cin >> hour;
    time1.setHour(hour);

    cout << "Enter Minute: ";
    cin >> min;
    time1.setMin(min);

    cout << "Enter Second: ";
    cin >> sec;
    time1.setSec(sec);

    // Display Time1 data
    time1.display();

    // Getters for Time1
    cout << "\nGetters Time1";
    cout << "\nHour : " << time1.getHour() << "\tMinute : " << time1.getMin() << "\tSecond : " << time1.getSec();

    // Setters for Time2
    // cout << "\nEnter Hour: ";
    // cin >> hour;
    // time2.setHour(hour);

    // cout << "Enter Minute: ";
    // cin >> min;
    // time2.setMin(min);

    // cout << "Enter Second: ";
    // cin >> sec;
    // time2.setSec(sec);

    // // Getters Time2
    // cout << "\nGetters Time2";
    // cout << "\nHour : " << time2.getHour() << "\tMinute : " << time2.getMin() << "\tSecond : " << time2.getSec();

    // // Display Time2 data
    // time2.display();

    return 1;
}
