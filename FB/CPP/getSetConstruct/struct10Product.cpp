#include <iostream>
#include <string.h>
using namespace std;

typedef struct Product
{
    int id;
    char name[20];
    int quantity;
    float price;

    // Constructor
    Product()
    {
        this->id = NULL;
        strcpy(this->name, "No Name");
        this->quantity = 0;
        this->price = 0;
    }

public:
    // Setters
    void setId(int Id) { this->id = Id; }
    void setName(char *name) { strcpy(this->name, name); }
    void setQuantity(int qty) { this->quantity = qty; }
    void setPrice(float price) { this->price = price; }

    // Getters
    int getId() { return this->id; }
    char *getName() { return this->name; }
    int getQuantity() { return this->quantity; }
    float getPrice() { return this->price; }

    // Display
    void display()
    {
        cout << "\nProduct ID: " << this->id << "\tName: " << this->name
             << "\tQuantity: " << this->quantity << "\tPrice: " << this->price;
    }

} Product;
int main()
{
    Product prod1, prod2;
    int productId, quantity;
    char name[20];
    float price;

    // Constructor call
    cout << "\nDefault Product1 values:";
    prod1.display();
    // Constructor call
    cout << "\nDefault Product2 values:";
    prod2.display();

    // Setters for Product1
    cout << "\nEnter Product ID: ";
    cin >> productId;
    prod1.setId(productId);

    cout << "Enter Product Name: ";
    cin >> name;
    prod1.setName(name);

    cout << "Enter Product Price: ";
    cin >> price;
    prod1.setPrice(price);

    cout << "Enter Product Quantity: ";
    cin >> quantity;
    prod1.setQuantity(quantity);

    // Display Product1 data
    prod1.display();

    // Getters for Product1
    cout << "\nGetters Product1";
    cout << "\nProductId : " << prod1.getId() << "\tName : " << prod1.getName() << "\tPrice : " << prod1.getPrice() << "\tQuantity : " << prod1.getQuantity();

    // Setters for Product2
    cout << "\nEnter Product ID: ";
    cin >> productId;
    prod2.setId(productId);

    cout << "Enter Product Name: ";
    cin >> name;
    prod2.setName(name);

    cout << "Enter Product Price: ";
    cin >> price;
    prod2.setPrice(price);

    cout << "Enter Product Quantity: ";
    cin >> quantity;
    prod2.setQuantity(quantity);

    // Getters Product2
    cout << "\nGetters Product2";
    cout << "\nProductId : " << prod2.getId() << "\tName : " << prod2.getName() << "\tPrice : " << prod2.getPrice() << "\tQuantity : " << prod2.getQuantity();

    // Display Product2 data
    prod2.display();

    return 1;
}
