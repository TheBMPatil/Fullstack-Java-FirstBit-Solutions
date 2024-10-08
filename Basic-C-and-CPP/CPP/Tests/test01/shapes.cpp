#include <iostream>
using namespace std;
class Circle
{
private:
    double radious;

public:
    // Constructor
    Circle(double radious)
    {
        this->radious = radious;
    }
    Circle()
    {
        this->radious = 0;
    }

    // Setter
    void setRadious(double radious) { this->radious = radious; }
    // Getter
    double getRadious() { return this->radious; }
};

class Triangle
{
private:
    double base;
    double height;

public:
    // Constructor
    Triangle(double base, double height)
    {
        this->base = base;
        this->height = height;
    }
    Triangle()
    {
        this->base = 0;
        this->height = 0;
    }
    // Seter
    void setBase(double base) { this->base = base; }
    void setHeight(double height) { this->height = height; }
    // Getter
    double getBase() { return this->base; }
    double getHeight() { return this->height; }
};

class Rectangle
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    Rectangle()
    {
        this->length = 0;
        this->width = 0;
    }
    // Setter
    void setWidth(double width) { this->width = width; }
    void setlength(double length) { this->length = length; }
    // getter
    double getWidth() { return this->width; }
    double getlength() { return this->length; }
};

class Square
{
private:
    double side;

public:
    // Constructor
    Square(double side)
    {
        this->side = side;
    }
    Square()
    {
        this->side = 0;
    }
    // Setter
    void setside(double side) { this->side = side; }
    // Getter
    double getside() { return this->side; }
};

class Shapes
{
public:
    // Area of Circle
    double calculateArea(Circle circle)
    {
        double PI = 3.14;
        return PI * (circle.getRadious() * circle.getRadious());
    }

    // Area of Triangle
    double calculateArea(Triangle triangle)
    {
        return (0.5) * triangle.getBase() * triangle.getHeight();
    }
    // Area of rectangle
    double calculateArea(Rectangle rectangle)
    {
        return rectangle.getlength() * rectangle.getWidth();
    }
    // Area Of square
    double calculateArea(Square square)
    {
        return square.getside() * square.getside();
    }
};

int main()
{
    Shapes shape;

    int choice;
    do
    {
        cout << "\n\nWhat do you want to do : \n1) Calculate area of Triangle \t2) Calculate area of Circle \t3) Calculate area of Rectangle \t4) Calculate area of Square \nEnter Your Choice   :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int base, height;
            cout << "\nEnter Base : ";
            cin >> base;
            cout << "\nEnter Height : ";
            cin >> height;
            Triangle triangle(base, height);
            cout << "\nArea Of Triangle : " << shape.calculateArea(triangle);
            break;
        case 2:
            double radious;
            cout << "\nEnter Radious : ";
            cin >> radious;
            Circle circle(radious);
            cout << "\nArea Of Circle : " << shape.calculateArea(circle);
            break;
        case 3:
            int length, width;
            cout << "\nEnter length : ";
            cin >> length;
            cout << "\nEnter width : ";
            cin >> width;
            Rectangle rectangle(length, width);
            cout << "\nArea Of Rectangle : " << shape.calculateArea(rectangle);
            break;
        case 4:
            int side;
            cout << "\nEnter Side : ";
            cin >> side;
            Square square(side);
            cout << "\nArea Of Square : " << shape.calculateArea(square);
            break;
        case 0:
            cout << "\nExiting.............................!!! ";
            break;

        default:
            cout << "\nInvalid Choice....! ";
            break;
        }

    } while (choice != 0);
    return 0;
}
