// 2. Write a operator overloading code to overload all the arithmetic operators to add 2 distances, 1 distance and int value and one non member function to add int and distance.

#include <iostream>
using namespace std;

typedef struct Distance
{
    int feet;
    int inch;
    // Constructor
    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }

    Distance(int feet, int inch)
    {
        this->feet = feet;
        this->inch = inch;
    }

public:
    // Setters
    void setFeet(int feet) { this->feet = feet; }
    void setInch(int inch) { this->inch = inch; }

    // Getters
    int getFeet() { return this->feet; }
    int getInch() { return this->inch; }

    // Display
    void display()
    {
        cout << "\nDistance: " << this->feet << " feet " << this->inch << " inches";
    }
    // Arithmatic
    Distance operator+(Distance distance)
    {
        Distance temp;
        temp.feet = this->feet + distance.getFeet();
        temp.inch = this->inch + distance.getInch();
        return temp;
    }
    Distance operator-(Distance distance)
    {
        Distance temp;
        temp.feet = this->feet - distance.getFeet();
        temp.inch = this->inch - distance.getInch();
        return temp;
    }
    Distance operator/(Distance distance)
    {
        Distance temp;
        temp.feet = this->feet / distance.getFeet();
        temp.inch = this->inch / distance.getInch();
        return temp;
    }
    Distance operator*(Distance distance)
    {
        Distance temp;
        temp.feet = this->feet * distance.getFeet();
        temp.inch = this->inch * distance.getInch();
        return temp;
    }

    Distance operator+(int distance)
    {
        Distance temp;
        temp.feet = this->feet + distance;
        temp.inch = this->inch + distance;
        return temp;
    }
    Distance operator-(int distance)
    {
        Distance temp;
        temp.feet = this->feet - distance;
        temp.inch = this->inch - distance;
        return temp;
    }
    Distance operator/(int distance)
    {
        Distance temp;
        temp.feet = this->feet / distance;
        temp.inch = this->inch / distance;
        return temp;
    }
    Distance operator*(int distance)
    {
        Distance temp;
        temp.feet = this->feet * distance;
        temp.inch = this->inch * distance;
        return temp;
    }

    // logical operator
    int operator&&(Distance distance)
    {
        return (this->feet && distance.feet) && (this->inch && distance.inch);
    }

    int operator||(Distance distance)
    {
        return (this->feet || distance.feet) || (this->inch || distance.inch);
    }

    int operator!()
    {
        return !(this->feet || this->inch);
    }

    // relational operator
    int operator==(Distance distance)
    {
        return (this->feet == distance.feet) && (this->inch == distance.inch);
    }

    int operator!=(Distance distance)
    {
        return (this->feet != distance.feet) || (this->inch != distance.inch);
    }

    int operator>(Distance distance)
    {
        if (this->feet > distance.feet)
            return true;
        else if (this->feet == distance.feet)
            return this->inch > distance.inch;
        return false;
    }

    int operator<(Distance distance)
    {
        if (this->feet < distance.feet)
            return true;
        else if (this->feet == distance.feet)
            return this->inch < distance.inch;
        return false;
    }

    int operator>=(Distance distance)
    {
        return !(*this < distance);
    }

    int operator<=(Distance distance)
    {
        return !(*this > distance);
    }

    // unary operator

    // Pre-increment
    Distance operator++()
    {
        ++this->feet;
        ++this->inch;
        return *this;
    }

    // Post-increment
    Distance operator++(int)
    {
        Distance temp = *this;
        this->feet++;
        this->inch++;
        return temp;
    }

    // Pre-decrement
    Distance operator--()
    {
        --this->feet;
        --this->inch;
        return *this;
    }

    // Post-decrement
    Distance operator--(int)
    {
        Distance temp = *this;
        this->feet--;
        this->inch--;
        return temp;
    }

} Distance;

Distance operator+(int distance, Distance distance1)
{
    Distance temp;
    temp.setFeet(distance + distance1.getFeet());
    temp.setInch(distance + distance1.getInch());
    return temp;
}

Distance operator-(int distance, Distance distance1)
{
    Distance temp;
    temp.setInch(distance - distance1.getInch());
    temp.setFeet(distance - distance1.getFeet());
    return temp;
}

Distance operator*(int distance, Distance distance1)
{
    Distance temp;
    temp.setFeet(distance * distance1.getFeet());
    temp.setInch(distance * distance1.getInch());
    return temp;
}

Distance operator/(int distance, Distance distance1)
{
    Distance temp;
    temp.setFeet(distance / distance1.getFeet());
    temp.setInch(distance / distance1.getInch());
    return temp;
}

int main()
{

    Distance distance1(10, 5);
    Distance distance2(5, 5);
    Distance distance3;

    cout << "\nDistance 1";
    distance1.display();
    cout << "\nDistance 2";
    distance2.display();

    // Arithmetic Operators
    cout << "\n\nAddition of both Distances:";
    distance3 = distance1 + distance2;
    distance3.display();

    cout << "\n\nSubtraction of both Distances:";
    distance3 = distance1 - distance2;
    distance3.display();

    cout << "\n\nMultiplication of both Distances:";
    distance3 = distance1 * distance2;
    distance3.display();

    cout << "\n\nDivision of both Distances:";
    distance3 = distance1 / distance2;
    distance3.display();

    cout << "\n\nAddition of 10 and Distance:";
    distance2.display();
    cout << " = ";
    distance3 = 10 + distance2;
    distance3.display();

    cout << "\n\nSubstraction of 10 and Distance:";
    distance2.display();
    cout << " = ";
    distance3 = 10 - distance2;
    distance3.display();

    cout << "\n\nMultiplication of 10 and Distance:";
    distance2.display();
    cout << " = ";
    distance3 = 10 * distance2;
    distance3.display();

    cout << "\n\nDivision of 10 and Distance:";
    distance2.display();
    cout << " = ";
    distance3 = 10 / distance2;
    distance3.display();

    // Logical Operators
    cout << "\n\nLogical AND (&&) of both Distances: " << (distance1 && distance2);
    cout << "\nLogical OR (||) of both Distances: " << (distance1 || distance2);
    cout << "\nLogical NOT (!) of Distance 1: " << (!distance1);

    // Relational Operators
    cout << "\n\nDistance 1 == Distance 2: " << (distance1 == distance2);
    cout << "\nDistance 1 != Distance 2: " << (distance1 != distance2);
    cout << "\nDistance 1 > Distance 2: " << (distance1 > distance2);
    cout << "\nDistance 1 < Distance 2: " << (distance1 < distance2);
    cout << "\nDistance 1 >= Distance 2: " << (distance1 >= distance2);
    cout << "\nDistance 1 <= Distance 2: " << (distance1 <= distance2);

    // Unary Operators
    cout << "\nPre-Increment (++Distance 1):";
    distance3 = ++distance1;
    distance3.display();

    cout << "\nPost-Increment (Distance 1++):";
    distance3 = distance1++;
    distance3.display();

    cout << "\nPre-Decrement (--Distance 1):";
    distance3 = --distance1;
    distance3.display();

    cout << "\nPost-Decrement (Distance 1--):";
    distance3 = distance1--;
    distance3.display();

    return 1;
}