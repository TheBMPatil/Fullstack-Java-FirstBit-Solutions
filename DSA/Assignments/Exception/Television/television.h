// Create class television that has members to hold the model number ,screen size and price. 
// Take a member function to take input from user, If more than 4 digits are entered for model 
// number, if screen size is smaller than 12 inches or greater than 70 inches or if the price is 
// negative or greater than 5000 Rs, then throw an exception. 
// Write a main() that  instantiates an object and allows the user to enter and display data. If  
#ifndef TELEVISION_H
#define TELEVISION_H

#include <stdexcept>
#include <iostream>
using namespace std;

class Television {
private:
    int modelNumber;
    int screenSize;
    float price;

    int countDigits(int number); // Helper function to count digits in an integer

public:
    Television();
    void inputDetails();
    void displayDetails() const;
};

#endif // TELEVISION_H
