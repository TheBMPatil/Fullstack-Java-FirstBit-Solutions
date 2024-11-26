#include "Product.h"

class Cloths : public Product
{
    string size;
    string material;

public:
    Cloths(int, string, double, int, string, string);

    void display();
    double calculateDiscountedPrice() override;
};