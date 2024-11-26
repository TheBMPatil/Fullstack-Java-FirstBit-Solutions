#include "Product.h"

class Grocery :public Product
{
    int expDate;
    double weight;

public:
    Grocery(int, string, double, int, int, double);

    void display();
     double calculateDiscountedPrice() override; 
};