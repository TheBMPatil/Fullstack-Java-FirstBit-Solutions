#include <bits/stdc++.h>
using namespace std;

class Shirt
{
private:
    int sid;
    double price;
    string sname, sType, sSize;
    static int prodCount;

public:
    // Constructors
    Shirt();
    Shirt(int, string, string, string, double);

    // Methods
    void displayShirt();
    static double calculateFinalPrice(const string& size, double basePrice); // Adjust price by size

    // Static Method for Object Count
    static int getProdCount() { return prodCount; }
};
