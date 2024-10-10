#include <iostream>
using namespace std;

class Shape
{
private:
    double area;

public:
    Shape()
    {
        area = 0;
    }

    virtual void calculateArea()
    {
        area = 0;
    }
    void setArea(double area) { this->area = area; }
    double getArea() { return this->area; }
    virtual void display()
    {
        cout << "Area: " << this->area << endl;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    // Constructor
    Circle(double r)
    {
        radius = r;
        calculateArea();
    }

    Circle()
    {
        radius = 0;
        calculateArea();
    }

    void calculateArea()
    {
        this->setArea(3.14 * radius * radius); // Area of the circle
    }

    void display()
    {
        cout << "Circle with radius: " << radius << endl;
        Shape::display(); // Call base class display
    }
};

class Triangle : public Shape
{
private:
    double base;
    double height;

public:
    // Constructor
    Triangle(double b, double h)
    {
        base = b;
        height = h;
        calculateArea();
    }

    Triangle()
    {
        base = 0;
        height = 0;
        calculateArea();
    }

    void calculateArea()
    {
        this->setArea(0.5 * base * height);
    }
    void display()
    {
        cout << "Triangle with base: " << base << " and height: " << height << endl;
        Shape::display();
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
        calculateArea();
    }

    Rectangle()
    {
        length = 0;
        width = 0;
        calculateArea();
    }

    void calculateArea()
    {
        this->setArea(length * width);
    }

    void display()
    {
        cout << "Rectangle with length: " << length << " and width: " << width << endl;
        Shape::display();
    }
};

int main()
{
    int choice;
    do
    {
        cout << "\n\nWhat do you want to do: "
             << "\n1) Calculate area of Triangle "
             << "\n2) Calculate area of Circle "
             << "\n3) Calculate area of Rectangle "
             << "\n0) Exit"
             << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double base, height;
            cout << "\nEnter Base: ";
            cin >> base;
            cout << "\nEnter Height: ";
            cin >> height;
            Triangle triangle(base, height);
            triangle.display();
            break;
        }
        case 2:
        {
            double radius;
            cout << "\nEnter radius: ";
            cin >> radius;
            Circle circle(radius);
            circle.display();
            break;
        }
        case 3:
        {
            double length, width;
            cout << "\nEnter length: ";
            cin >> length;
            cout << "\nEnter width: ";
            cin >> width;
            Rectangle rectangle(length, width);
            rectangle.display();
            break;
        }
        default:
        {
            if (choice != 0)
            {
                cout << "\nInvalid Choice....! ";
            }
            break;
        }
        }
    } while (choice != 0);
    return 0;
}
