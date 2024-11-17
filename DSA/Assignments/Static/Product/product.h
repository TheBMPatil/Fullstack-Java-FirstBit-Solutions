// Create a class Product with members as pid,pname,price and quantity .Add following
// methods:
// e.  Constructor (Support both parameterized and parameterless)
// f. Destructor
// g.  ShowBook
// h.  Add static member discount.
// i. Provide methods for applying discount on price of product.

#include <bits/stdc++.h>

using namespace std;

class Product
{
private:
    int pid, quantity;
    string pname;
    double price;
    static int prodCount;

public:
    Product();
    Product(int, string, int, double);
    void showProduct();
    static void showProdCount();
};
