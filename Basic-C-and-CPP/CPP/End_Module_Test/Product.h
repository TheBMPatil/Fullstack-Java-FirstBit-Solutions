#include <bits/stdc++.h>
using namespace std;
#pragma once
class Product
{
    int prodId;
    string prodName;
    double prodPrice, finalPrice;
    int prodQuantity;

public:
    Product(int, string);
    Product(int, string, double, int);

    void setPrice(double);
    double getPrice();
    void setFPrice(double);
    double getFPrice();
    int getProdId();
    virtual void display();
    virtual double calculateDiscountedPrice()=0;
};