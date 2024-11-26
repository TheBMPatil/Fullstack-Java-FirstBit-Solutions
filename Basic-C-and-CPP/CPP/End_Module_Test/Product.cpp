#include "Product.h"

Product::Product(int id, string name)
{
    this->prodId = id;
    this->prodName = name;
}
Product::Product(int id, string name, double price, int quant)
{
    this->prodId = id;
    this->prodName = name;
    this->prodPrice = price;
    this->prodQuantity = quant;
}
void Product::setPrice(double price)
{
    this->prodPrice = price;
}
double Product::getPrice()
{
    return this->prodPrice;
}
void Product::setFPrice(double price)
{
    this->finalPrice = price;
}
double Product::getFPrice()
{
    return this->finalPrice;
}
int Product::getProdId()
{
    return this->prodId;
}

void Product::display()
{
    cout << "\nProduct details are :";
    cout << "\nProd ID        : " << this->prodId;
    cout << "\nProd Name      : " << this->prodName;
    cout << "\nProd Price     : " << this->prodPrice;
    cout << "\nProd Quantity  : " << this->prodQuantity;
}
