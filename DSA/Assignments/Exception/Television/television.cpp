// Create class television that has members to hold the model number ,screen size and price. 
// Take a member function to take input from user, If more than 4 digits are entered for model 
// number, if screen size is smaller than 12 inches or greater than 70 inches or if the price is 
// negative or greater than 5000 Rs, then throw an exception. 
// Write a main() that  instantiates an object and allows the user to enter and display data. If  
#include "television.h"

Television::Television() : modelNumber(0), screenSize(0), price(0.0) {}

// Helper function to count digits in an integer
int Television::countDigits(int number) {
    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

void Television::inputDetails() {
    try {
        cout << "Enter Model Number: ";
        cin >> modelNumber;

        if (countDigits(modelNumber) > 4) {
            throw invalid_argument("Model number must not exceed 4 digits.");
        }

        cout << "Enter Screen Size (in inches): ";
        cin >> screenSize;
        if (screenSize < 12 || screenSize > 70) {
            throw invalid_argument("Screen size must be between 12 and 70 inches.");
        }

        cout << "Enter Price (in Rs): ";
        cin >> price;
        if (price < 0 || price > 5000) {
            throw invalid_argument("Price must be between 0 and 5000 Rs.");
        }
    } catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
        modelNumber = 0;
        screenSize = 0;
        price = 0.0;
        throw; // Rethrow the exception
    }
}

void Television::displayDetails() const {
    cout << "\nTelevision Details:" << endl;
    cout << "Model Number: " << modelNumber << endl;
    cout << "Screen Size: " << screenSize << " inches" << endl;
    cout << "Price: Rs " << price << endl;
}
