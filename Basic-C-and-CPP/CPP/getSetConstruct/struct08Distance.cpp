#include <iostream>
#include <string.h>
using namespace std;

typedef struct Distance
{
    int feet;
    int inch;

    // Constructor
    Distance()
    {
        cout << "\nDefault constructor called";
        this->feet = 0;
        this->inch = 0;
    }

    Distance(int feet, int inch)
    {
        cout << "\nParameterized Constructor for Distance called";
        this->feet = feet;
        this->inch = inch;
    }

public:
    // Setters
    void setFeet(int f) { this->feet = f; }
    void setInch(int i) { this->inch = i; }

    // Getters
    int getFeet() { return this->feet; }
    int getInch() { return this->inch; }

    // Display
    void display()
    {
        cout << "\nDistance: " << this->feet << " feet " << this->inch << " inches";
    }

} Distance;
int main()
{
    Distance dist1, dist2(23, 43);
    int feet, inch;

    // Constructor call
    cout << "\nDefault Distance1 values:";
    dist1.display();
    // Constructor call
    cout << "\nDefault Distance2 values:";
    dist2.display();

    // Setters for Distance1
    cout << "\nEnter Feet: ";
    cin >> feet;
    dist1.setFeet(feet);

    cout << "Enter Inch: ";
    cin >> inch;
    dist1.setInch(inch);

    // Display Distance1 data
    dist1.display();

    // Getters for Distance1
    cout << "\nGetters Distance1";
    cout << "\nFeet : " << dist1.getFeet() << "\tInch : " << dist1.getInch();

    // // Setters for Distance2
    // cout << "\nEnter Feet: ";
    // cin >> feet;
    // dist2.setFeet(feet);

    // cout << "Enter Inch: ";
    // cin >> inch;
    // dist2.setInch(inch);

    // // Getters Distance2
    // cout << "\nGetters Distance2";
    // cout << "\nFeet : " << dist2.getFeet() << "\tInch : " << dist2.getInch();

    // // Display Distance2 data
    // dist2.display();

    return 1;
}
