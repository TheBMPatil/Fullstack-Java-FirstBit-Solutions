#include "Coths.h"

Cloths::Cloths(int id, string name, double price, int quant, string size, string material) : Product(id, name, price, quant)
{
    this->material = material;
    this->size = size;
}

void Cloths::display()
{
    Product::display();
    cout << "\nMaterial   :" << this->material;
    cout << "\nSize       :" << this->size;
}

double Cloths::calculateDiscountedPrice()
{
    double discount = 0.10;
    this->setFPrice(this->getPrice() - (this->getPrice() * discount));
    return this->getFPrice();
}