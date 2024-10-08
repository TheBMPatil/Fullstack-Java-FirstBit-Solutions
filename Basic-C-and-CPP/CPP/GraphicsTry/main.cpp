#include <graphics.h>
#include <iostream>
#include <conio.h> // For getch()
using namespace std;

// Base class Shape
class Shape {
	public:
		virtual void draw() = 0; // Pure virtual function for drawing
};

// Derived class for Circle
class Circle : public Shape {
	public:
		void draw() override {
			// Draw a circle with center (200, 200) and radius 50
			circle(200, 200, 50);
		}
};

// Derived class for Rect
class Rect : public Shape {
	public:
		void draw() override {
			// Draw a rectangle with top-left (100, 100) and bottom-right (200, 150)
			rectangle(100, 100, 200, 150);
		}
};

// Derived class for Square
class Square : public Shape {
	public:
		void draw() override {
			// Draw a square with top-left (250, 250) and side length 70
			rectangle(250, 250, 320, 320); // Square is just a special case of Rect
		}
};

// Derived class for Triangle
class Triangle : public Shape {
	public:
		void draw() override {
			// Draw a triangle using lines
			int points[] = {300, 300, 350, 250, 400, 300, 300, 300}; // Closing the loop by repeating the first point
			drawpoly(4, points);									 // 4 vertices: the last point closes the triangle
		}
};

int main() {
	// Initialize shapes array
	Shape *shapes[4];
	shapes[0] = new Circle();
	shapes[1] = new Rect();
	shapes[2] = new Square();
	shapes[3] = new Triangle();

	int ch;
		initwindow(800, 800);

	// Main loop to choose shapes
	do {
		cout << "\nChoose What Do You want to Draw :" << endl;
		cout << "1) Circle \t2) Rectangle \t3) Square \t 4) Triangle \n0) To Exit: ";
		cin >> ch;

	
		cleardevice();
		if (ch >= 1 && ch <= 4) {

			shapes[ch - 1]->draw();

		//	getch();


		} else if (ch != 0) {
			cout << "\nInvalid Choice! Please choose a valid option." << endl;
		}

	} while (ch != 0);

	// Clean up dynamically allocated memory
	for (int i = 0; i < 4; ++i) {
		delete shapes[i];
	}

	cout << "Program exited successfully." << endl;

	return 0;
}
