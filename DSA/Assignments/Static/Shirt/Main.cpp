#include "shirt.h"

int main()
{
    // Create Shirt Instances
    Shirt shirt1(1, "Formal Shirt", "Formal", "Medium", 1000);
    Shirt shirt2(2, "Casual Shirt", "Casual", "Large", 1200);
    Shirt shirt3(3, "Party Shirt", "Party Wear", "Small", 1500);

    // Display Shirt Details
    cout << "Displaying Shirt Details:\n";
    shirt1.displayShirt();
    shirt2.displayShirt();
    shirt3.displayShirt();

    // Display Product Count
    cout << "\nTotal Products Created: " << Shirt::getProdCount() << endl;

    return 0;
}
