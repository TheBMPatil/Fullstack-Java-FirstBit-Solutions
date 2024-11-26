#include "Product.h"

class Electronic :public Product
{
    int warranty;
    string brand;

public:
    Electronic(int, string, double, int, int, string);
    void display();
    // void setName(string);
    // void setWarranty(int);
    // void setBrand(string);
     double calculateDiscountedPrice() override; 
    // void setPrice(double);
};
