#include <bits/stdc++.h>
using namespace std;

int maxSize = 0;
int mobCount = 0;

class Mobile
{
    int IMIE;
    string brand;
    double price;

public:
    Mobile() = default;
    Mobile(int imie, string brand, double price)
    {
        this->brand = brand;
        this->IMIE = imie;
        this->price = price;
    }

    void setIMIE(int imie) { IMIE = imie; }
    void setPrice(double price) { this->price = price; }
    void setBrand(const string &brand) { this->brand = brand; }

    int getIMIE() const { return IMIE; }
    double getPrice() const { return price; }
    string getBrand() const { return brand; }

    void display() const
    {
        cout << "\nMobile Info:";
        cout << "\nIMIE: " << IMIE;
        cout << "\nBrand: " << brand;
        cout << "\nPrice: " << price << endl;
    }
};

void customSwap(Mobile &mob1, Mobile &mob2)
{
    Mobile temp = mob1;
    mob1 = mob2;
    mob2 = temp;
}

void sortByID(Mobile *mArr[], int cnt)
{
    for (int i = 0; i < cnt - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < cnt; j++)
        {
            if (mArr[j]->getIMIE() < mArr[minIndex]->getIMIE())
            {
                minIndex = j;
            }
        }
        customSwap(*mArr[i], *mArr[minIndex]);
    }
}

Mobile *binarySearch(Mobile *mArr[], int cnt, int id)
{
    int start = 0, end = cnt - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mArr[mid]->getIMIE() == id)
        {
            return mArr[mid];
        }

        if (mArr[mid]->getIMIE() < id)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return nullptr;
}

void sortByPrice(Mobile *mArr[], int cnt)
{
    // using Selection Sort
    for (int i = 0; i < cnt - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < cnt; j++)
        {
            if (mArr[j]->getPrice() < mArr[minIndex]->getPrice())
            {
                minIndex = j;
            }
        }
        customSwap(*mArr[minIndex], *mArr[i]);
    }
}

void addMobile(Mobile *mArr[], int &cnt)
{
    if (cnt >= maxSize)
    {
        cout << "Array is full. Cannot add more mobiles." << endl;
        return;
    }

    int imie;
    string brand;
    double price;

    cout << "Enter IMIE: ";
    cin >> imie;
    cout << "Enter Brand: ";
    cin >> brand;
    cout << "Enter Price: ";
    cin >> price;

    mArr[cnt++] = new Mobile(imie, brand, price);
}

void displayAllMobiles(Mobile *mArr[], int cnt)
{
    if (cnt == 0)
    {
        cout << "No mobiles to display!" << endl;
        return;
    }
    for (int i = 0; i < cnt; i++)
    {
        mArr[i]->display();
    }
}

int main()
{
    cout << "Enter the total number of products you want to add: ";
    cin >> maxSize;

    Mobile *MArray[maxSize];
    int choice;

    do
    {
        cout << "\nMenu:";
        cout << "\n1) Add Mobile Data";
        cout << "\n2) Display All Mobiles";
        cout << "\n3) Sort Mobiles by IMIE";
        cout << "\n4) Sort Mobiles by Price";
        cout << "\n5) Search Mobile by IMIE";
        cout << "\n0) Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addMobile(MArray, mobCount);
            break;

        case 2:
            displayAllMobiles(MArray, mobCount);
            break;

        case 3:
            sortByID(MArray, mobCount);
            cout << "Mobiles sorted by IMIE." << endl;
            break;
        case 4:
            sortByPrice(MArray, mobCount);
            cout << "Mobiles sorted by Price." << endl;
            break;

        case 5:
        {
            int id;
            cout << "Enter IMIE to search: ";
            cin >> id;
            sortByID(MArray, mobCount);
            Mobile *found = binarySearch(MArray, mobCount, id);
            if (found)
            {
                found->display();
            }
            else
            {
                cout << "Mobile not found!" << endl;
            }
            break;
        }

        case 0:
            cout << "Exiting " << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 0);

    // Cleanup dynamically allocated memory
    for (int i = 0; i < mobCount; i++)
    {
        delete MArray[i];
    }

    return 0;
}
