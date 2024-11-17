#include "product.h"
int Product::prodCount = 0;

Product::Product()
{
    this->pid = 0;
    this->pname = "Not Given";
    this->price = 0.0;
    this->quantity = 0;
    prodCount++;
}
Product::Product(int id, string name, int quantity, double price)
{
    this->pid = id;
    this->pname = name;
    this->price = price;
    this->quantity = quantity;
    prodCount++;
}
void Product::showProduct()
{
    cout << "\nProduct ID       : " << this->pid;
    cout << "\nProduct Name     : " << this->pname;
    cout << "\nProduct Price    : " << this->price;
    cout << "\nProduct Quantity : " << this->quantity;
}
void Product::showProdCount()
{
    cout << "\nProduct Count    : " << prodCount;
}