#include "shirt.h"

int Shirt::prodCount = 0;


Shirt::Shirt()
{
    this->sid = 0;
    this->price = 0.0;
    this->sname = "Not Given";
    this->sSize = "Not Given";
    this->sType = "Not Given";
    prodCount++;
}

Shirt::Shirt(int id, string name, string type, string size, double price)
{
    this->sid = id;
    this->price = price;
    this->sname = name;
    this->sSize = size;
    this->sType = type;
    prodCount++;
}

void Shirt::displayShirt()
{
    cout << "\nId    : " << this->sid;
    cout << "\nPrice : " << this->price;
    cout << "\nName  : " << this->sname;
    cout << "\nSize  : " << this->sSize;
    cout << "\nType  : " << this->sType;
    cout << "\nFinal Price (Adjusted) : " << calculateFinalPrice(sSize, price) << endl;
}

double Shirt::calculateFinalPrice(const string &size, double basePrice)
{
    if (size == "Medium")
        return basePrice * 1.1; 
    else if (size == "Large")
        return basePrice * 1.2; 
    else if (size == "X-Large")
        return basePrice * 1.3; 
    else
        return basePrice;
}
