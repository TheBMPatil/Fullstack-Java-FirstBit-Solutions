#include "graphics.h"
#include <stdio.h>
#include <iostream>
#include <conio.h> // For getch()

// Base class Shape
class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function
};

// Derived class for Circle
class Circle : public Shape
{
public:
    void draw() override
    {
        // Draw a circle with center (200, 200) and radius 50
        circle(200, 200, 50);
    }
};

// Derived class for Rect
class Rect : public Shape
{
public:
    void draw() override
    {
        // Draw a Rect with top-left (100, 100) and bottom-right (200, 150)
        rectangle(100, 100, 200, 150);
    }
};

// Derived class for Square
class Square : public Shape
{
public:
    void draw() override
    {
        // Draw a square with top-left (250, 250) and side length 70
        rectangle(250, 250, 320, 320); // Square is just a special case of Rect
    }
};

// Derived class for Triangle
class Triangle : public Shape
{
public:
    void draw() override
    {
        // Draw a triangle using lines
        int points[] = {300, 300, 350, 250, 400, 300};
        drawpoly(3, points); // 3 vertices for a triangle
    }
};

int main()
{
    // Initialize the graphics mode
    int gd = DETECT, gm;
    char *path;
    initgraph(&gd, &gm, path);

    Circle cir;
    Rect rect;
    Square squ;
    Triangle tri;

    // Clear the screen
    cleardevice();

    // Draw the shapes
    cir.draw();
    rect.draw();
    squ.draw();
    tri.draw();

    // Hold the screen until a key is pressed
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
