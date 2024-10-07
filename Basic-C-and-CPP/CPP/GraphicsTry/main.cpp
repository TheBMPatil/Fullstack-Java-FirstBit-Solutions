#include <graphics.h>
#include <iostream>
#include <conio.h> // For getch()
using namespace std;

// Base class Shape
class Shape
{
public:
	virtual void draw() = 0; // Pure virtual function for drawing
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
		// Draw a rectangle with top-left (100, 100) and bottom-right (200, 150)
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
		int points[] = {300, 300, 350, 250, 400, 300, 300, 300}; // Closing the loop by repeating the first point
		drawpoly(4, points);									 // 4 vertices: the last point closes the triangle
	}
};

int main()
{
	// Initialize shapes array
	Shape *shapes[4];
	shapes[0] = new Circle();
	shapes[1] = new Rect();
	shapes[2] = new Square();
	shapes[3] = new Triangle();

	int ch;

	// Main loop to choose shapes
	do
	{
		cout << "\nChoose What Do You want to Draw :" << endl;
		cout << "1) Circle \t2) Rectangle \t3) Square \t 4) Triangle \n0) To Exit: ";
		cin >> ch;

		initwindow(800, 800);
		cleardevice();
		if (ch >= 1 && ch <= 4)
		{
			// Initialize window

			// Draw the selected shape
			shapes[ch - 1]->draw();

			// Wait for a key press
			getch();

			// Add delay to ensure drawing is visible before closing the window
			// delay(500); // 500 milliseconds delay before closing

			// Close the graphics window
			// closegraph();
		}
		else if (ch != 0)
		{
			cout << "\nInvalid Choice! Please choose a valid option." << endl;
		}

	} while (ch != 0);

	// Clean up dynamically allocated memory
	for (int i = 0; i < 4; ++i)
	{
		delete shapes[i];
	}

	cout << "Program exited successfully." << endl;

	return 0;
}

// #include <graphics.h>
// #include <iostream>
// #include <conio.h> // For getch()
// using namespace std;
//
//// Base class Shape
// class Shape
//{
// public:
//	virtual void draw() = 0; // Pure virtual function for drawing
// };
//
//// Derived class for Circle
// class Circle : public Shape
//{
// public:
//	void draw() override
//	{
//		// Draw a circle with center (200, 200) and radius 50
//		circle(200, 200, 50);
//	}
// };
//
//// Derived class for Rect
// class Rect : public Shape
//{
// public:
//	void draw() override
//	{
//		// Draw a rectangle with top-left (100, 100) and bottom-right (200, 150)
//		rectangle(100, 100, 200, 150);
//	}
// };
//
//// Derived class for Square
// class Square : public Shape
//{
// public:
//	void draw() override
//	{
//		// Draw a square with top-left (250, 250) and side length 70
//		rectangle(250, 250, 320, 320); // Square is just a special case of Rect
//	}
// };
//
//// Derived class for Triangle
// class Triangle : public Shape
//{
// public:
//	void draw() override
//	{
//		// Draw a triangle using lines
//		int points[] = {300, 300, 350, 250, 400, 300};
//		drawpoly(3, points); // 3 vertices for a triangle
//	}
// };
//
// int main()
//{
//	// Initialize shapes array
//	Shape *shapes[4];
//	shapes[0] = new Circle();
//	shapes[1] = new Rect();
//	shapes[2] = new Square();
//	shapes[3] = new Triangle();
//
//	int ch;
//
//	// Main loop to choose shapes
//	do
//	{
//		cout << "\nChoose What Do You want to Draw :" << endl;
//		cout << "1) Circle \t2) Rectangle \t3) Square \t 4) Triangle \n0) To Exit: ";
//		cin >> ch;
//
//		if (ch >= 1 && ch <= 4)
//		{
//			// Initialize window
//			initwindow(800, 800);
//
//			// Draw the selected shape
//			shapes[ch - 1]->draw();
//
//			// Wait for a key press
//			getch();
//
//			// Close the graphics window
//			closegraph();
//		}
//		else if (ch != 0)
//		{
//			cout << "\nInvalid Choice! Please choose a valid option." << endl;
//		}
//
//	} while (ch != 0);
//
//	// Clean up dynamically allocated memory
//	for (int i = 0; i < 4; ++i)
//	{
//		delete shapes[i];
//	}
//
//	cout << "Program exited successfully." << endl;
//
//	return 0;
// }
//
//// #include <graphics.h>
//// #include <iostream>
//// #include <conio.h> // For getch()
//// using namespace std;
//// // Base class Shape
//// class Shape
//// {
//// public:
//// 	virtual void draw() = 0; // Pure virtual function
//// };
//
//// // Derived class for Circle
//// class Circle : public Shape
//// {
//// public:
//// 	void draw() override
//// 	{
//// 		// Draw a circle with center (200, 200) and radius 50
//// 		circle(200, 200, 50);
//// 	}
//// };
//
//// // Derived class for Rect
//// class Rect : public Shape
//// {
//// public:
//// 	void draw() override
//// 	{
//// 		// Draw a Rect with top-left (100, 100) and bottom-right (200, 150)
//// 		rectangle(100, 100, 200, 150);
//// 	}
//// };
//
//// // Derived class for Square
//// class Square : public Shape
//// {
//// public:
//// 	void draw() override
//// 	{
//// 		// Draw a square with top-left (250, 250) and side length 70
//// 		rectangle(250, 250, 320, 320); // Square is just a special case of Rect
//// 	}
//// };
//
//// // Derived class for Triangle
//// class Triangle : public Shape
//// {
//// public:
//// 	void draw() override
//// 	{
//// 		// Draw a triangle using lines
//// 		int points[] = {300, 300, 350, 250, 400, 300};
//// 		drawpoly(3, points); // 3 vertices for a triangle
//// 	}
//// };
//
//// int main()
//// {
//// 	// Initialize the graphics mode
//// 	// int gd = DETECT, gm;
//// 	// char *path;
//// 	// initgraph(&gd, &gm, path);
//// 	// Circle cir;
//// 	// Rect rect;
//// 	// Square squ;
//// 	// Triangle tri;
//
//// 	// Clear the screen
//// 	cleardevice();
//
//// 	// // Draw the shapes
//// 	// cir.draw();
//// 	// rect.draw();
//// 	// squ.draw();
//// 	// tri.draw();
//
//// 	Shape *shapes[10];
//// 	int ch;
//
//// 	shapes[0] = new Circle();
//// 	shapes[1] = new Rect();
//// 	shapes[2] = new Square();
//// 	shapes[3] = new Triangle();
//
//// 	do
//// 	{
//// 		cout << "\nChoose What Do You want to Draw :" << endl;
//// 		cout << "1) Circle \t2) Rectangle \t3) Square \t 4) Triangle \n0) To Exit ";
//// 		cin >> ch;
//
//// 		switch (ch)
//// 		{
//// 		case 1:
//// 			initwindow(800, 800);
//// 			shapes[ch - 1]->draw();
//// 			getch();
//// 			closegraph();
//// 			break;
//// 		case 2:
//// 			initwindow(800, 800);
//// 			shapes[ch - 1]->draw();
//// 			getch();
//// 			closegraph();
//// 			break;
//// 		case 3:
//// 			initwindow(800, 800);
//// 			shapes[ch - 1]->draw();
//// 			getch();
//// 			closegraph();
//// 			break;
//// 		case 4:
//// 			initwindow(800, 800);
//// 			shapes[ch - 1]->draw();
//// 			getch();
//// 			closegraph();
//// 			break;
//
//// 		default:
//// 			cout << "\nInvalid Choice";
//// 			break;
//// 		}
//
//// 	} while (ch != 0);
//
//// 	// Hold the screen until a key is pressed
//
//// 	// Close the graphics mode
//// 	//	closegraph();
//
//// 	return 0;
//// }
