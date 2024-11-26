#include "Elect.h"

Electronic::Electronic(int id, string name, double price, int quant, int warranty, string brand) : Product(id, name, price, quant)
{
    this->brand = brand;
    this->warranty = warranty;
}

void Electronic::display()
{
    Product::display();
    cout << "\nBrand Name   :" << this->brand;
    cout << "\nWarranty     :" << this->warranty << "yrs.";
}

double Electronic::calculateDiscountedPrice() 
{
    double discount = 0.10;
    this->setFPrice(this->getPrice() - (this->getPrice() * discount));
    return this->getFPrice();
}