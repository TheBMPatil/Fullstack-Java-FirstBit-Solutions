#include "shirt.h"

// Initialize static member
int Shirt::prodCount = 0;

// Default Constructor
Shirt::Shirt()
{
    this->sid = 0;
    this->price = 0.0;
    this->sname = "Not Given";
    this->sSize = "Not Given";
    this->sType = "Not Given";
    prodCount++;
}

// Parameterized Constructor
Shirt::Shirt(int id, string name, string type, string size, double price)
{
    this->sid = id;
    this->price = price;
    this->sname = name;
    this->sSize = size;
    this->sType = type;
    prodCount++;
}

// Display Shirt Details
void Shirt::displayShirt()
{
    cout << "\nId    : " << this->sid;
    cout << "\nPrice : " << this->price;
    cout << "\nName  : " << this->sname;
    cout << "\nSize  : " << this->sSize;
    cout << "\nType  : " << this->sType;
    cout << "\nFinal Price (Adjusted) : " << calculateFinalPrice(sSize, price) << endl;
}

// Static Method to Adjust Price Based on Size
double Shirt::calculateFinalPrice(const string &size, double basePrice)
{
    if (size == "Medium")
        return basePrice * 1.1; // 10% increase
    else if (size == "Large")
        return basePrice * 1.2; // 20% increase
    else if (size == "X-Large")
        return basePrice * 1.3; // 30% increase
    else
        return basePrice; // Small size, no change
}
