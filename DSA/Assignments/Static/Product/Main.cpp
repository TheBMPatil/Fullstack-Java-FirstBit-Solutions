#include "product.h"

int main()
{
    Product::showProdCount();
    Product b1(1, "Mobile", 23, 1499.99);
    b1.showProduct();
    Product::showProdCount();

    cout << "\n";
    Product b2;
    b2.showProduct();
    Product::showProdCount();

    cout << "\n";
    Product b3(2, "Laptop", 12, 3455.67);
    b3.showProduct();
    Product::showProdCount();
    return 0;
}