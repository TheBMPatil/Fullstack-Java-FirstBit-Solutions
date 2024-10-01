#include <iostream>
#include <string.h>
using namespace std;

typedef struct Date
{
    int day;
    int month;
    int year;

    // Constructor
    Date()
    {
        cout << "\nDefault constructor called\n";
        this->day = 1;
        this->month = 1;
        this->year = 2000;
    }

    Date(int day, int month, int year)
    {
        cout << "\nParameterized Constructor for Date called";
        this->day = day;
        this->month = month;
        this->year = year;
    }

public:
    // Setters
    void setDay(int d) { this->day = d; }
    void setMonth(int m) { this->month = m; }
    void setYear(int y) { this->year = y; }

    // Getters
    int getDay() { return this->day; }
    int getMonth() { return this->month; }
    int getYear() { return this->year; }

    // Display
    void display()
    {
        cout << "\nDate: " << this->day << "/" << this->month << "/" << this->year;
    }

} Date;

int main()
{
    Date date1, date2(11, 10, 2002);
    int day, month, year;

    // Constructor call
    cout << "\nDefault Date1 values:";
    date1.display();
    // Constructor call
    cout << "\nDefault Date2 values:";
    date2.display();

    // Setters for Date1
    cout << "\nEnter Day: ";
    cin >> day;
    date1.setDay(day);

    cout << "Enter Month: ";
    cin >> month;
    date1.setMonth(month);

    cout << "Enter Year: ";
    cin >> year;
    date1.setYear(year);

    // Display Date1 data
    date1.display();

    // Getters for Date1
    cout << "\nGetters Date1";
    cout << "\nDay : " << date1.getDay() << "\tMonth : " << date1.getMonth() << "\tYear : " << date1.getYear();

    // // Setters for Date2
    // cout << "\nEnter Day: ";
    // cin >> day;
    // date2.setDay(day);

    // cout << "Enter Month: ";
    // cin >> month;
    // date2.setMonth(month);

    // cout << "Enter Year: ";
    // cin >> year;
    // date2.setYear(year);

    // // Getters Date2
    // cout << "\nGetters Date2";
    // cout << "\nDay : " << date2.getDay() << "\tMonth : " << date2.getMonth() << "\tYear : " << date2.getYear();

    // // Display Date2 data
    // date2.display();

    return 1;
}
