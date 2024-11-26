#include "Groc.h"

Grocery::Grocery(int id, string name, double price, int quant, int expDate, double weight) : Product(id, name, price, quant)
{

    this->expDate = expDate;
    this->weight = weight;
}

void Grocery::display()
{
    Product::display();
    cout << "\nExpiry Date    : " << this->expDate;
    cout << "\nWeight         :" << this->weight;
}


double Grocery::calculateDiscountedPrice()
{
    double discount = 0.05;
    this->setFPrice(this->getPrice() - (this->getPrice() * discount));
    return this->getFPrice();
}