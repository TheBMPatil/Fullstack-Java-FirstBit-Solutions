#include "Product.h"
#include "Elect.h"
#include "Groc.h"
#include "Coths.h"

void showMenu(int &ch)
{
    cout << "\n1) Display All Products  \t 2) Create New Products \n3) Display Final Price of each PRoduct\t4) Remove Product \n0) Exit\nEnter Your Choice : ";
    cin >> ch;
}

int serachProById(int &id, int &noOfProds, Product *ptr[])
{
    int idx = -1;
    for (int i = 0; i < noOfProds; i++)
    {
        if (ptr[i]->getProdId() == id)
        {
            return i;
        }
    }

    return idx;
}

bool removeProduct(int &id, int &index, Product *p[])
{

    int idx = serachProById(id, index, p);

    if (idx != -1)
    {
        for (int i = idx; i < index - 1; i++)
        {
            p[i] = p[i + 1];
        }
        index -= 1;

        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Cloths *c1 = new Cloths(10, "Shirt", 145.68, 5, "M", "linon");
    Electronic *ele1 = new Electronic(10, "Mobile", 1300.0, 10, 5, "Samsung");
    Grocery *g1 = new Grocery(123, "Sugar", 34.55, 69, 2, 5);

    Product *pr[10];
    int index = 0;
    pr[index++] = c1;
    pr[index++] = ele1;
    pr[index++] = g1;
    int id, quant;
    string name;
    double price;

    // g1.display();
    // cout << "Discounted Price : " << g1.calculateDiscountedPrice();
    // ele1.display();
    // cout << "Discounted Price : " << ele1.calculateDiscountedPrice();
    // c1.display();
    // cout << "Discounted Price : " << c1.calculateDiscountedPrice();

    int ch;
    do
    {
        showMenu(ch);

        switch (ch)
        {
        case 1:
            cout << "\nList of all Prodducts..:";
            for (int i = 0; i < index; i++)
            {
                pr[i]->display();
                cout << "\n\n======================================================================\n";
            }

            break;
        case 2:
        {
            int prodC;
            cout << "\nWhich Prduct do you want to add : \n1) Electronics \t2) Cloth \t 3) Grocery \n";
            cin >> prodC;

            switch (prodC)
            {
            case 1:
            {
                cout << "\nEnter Product Id";
                cin >> id;
                cout << "\nEnter Product Name";
                cin >> name;
                cout << "\nEnter Product Price";
                cin >> price;
                cout << "\nEnter Product Quantity";
                cin >> quant;
                int Warranty;
                string brand;
                cout << "\nEnter Product Warranty in years";
                cin >> Warranty;
                cout << "\nEnter Product Brand name";
                cin >> brand;

                Electronic *ele = new Electronic(id, name, price, quant, Warranty, brand);
                pr[index++] = ele;
            }
            break;
            case 2:
            {
                cout << "\nEnter Product Id";
                cin >> id;
                cout << "\nEnter Product Name";
                cin >> name;
                cout << "\nEnter Product Price";
                cin >> price;
                cout << "\nEnter Product Quantity";
                cin >> quant;
                string size;
                string material;
                cout << "\nEnter Product Size";
                cin >> size;
                cout << "\nEnter Product Material";
                cin >> material;

                Cloths *clot = new Cloths(id, name, price, quant, size, material);
                pr[index++] = clot;
            }
            break;
            case 3:
            {
                cout << "\nEnter Product Id";
                cin >> id;
                cout << "\nEnter Product Name";
                cin >> name;
                cout << "\nEnter Product Price";
                cin >> price;
                cout << "\nEnter Product Quantity";
                cin >> quant;
                int expdate;
                double weight;
                cout << "\nEnter Product Expiry Date";
                cin >> expdate;
                cout << "\nEnter Product Weight";
                cin >> weight;
                Grocery *groc = new Grocery(id, name, price, quant, expdate, weight);
                pr[index++] = groc;
            }
            break;
            default:
                cout << "\nInvalid Choice";
                break;
            }
        }
        break;
        case 3:
            cout << "\nList of all Prodducts Final Prices..:";
            for (int i = 0; i < index; i++)
            {
                pr[i]->calculateDiscountedPrice();
                cout << "Product Final Price :  " << pr[i]->getFPrice();
                cout << "\n======================================================================\n";
            }
            break;

        case 4:
        {
            cout << "\nEnter the id of product you want to delete..";
            cin >> id;
            if (removeProduct(id, index, pr))
                cout << "\nDeleted successfully...!";
            else
                cout << "\nInvalid Product Id";
        }

        break;

        default:
            cout << "\nInvalid Choice";
            break;
        }

    } while (ch != 0);
    return 0;
}