#include <iostream>
#include <string.h>
using namespace std;

typedef struct Complex
{
    float real;
    float imaginary;

    // Constructor
    Complex()
    {
        this->real = 0;
        this->imaginary = 0;
    }

public:
    // Setters
    void setReal(float r) { this->real = r; }
    void setImaginary(float i) { this->imaginary = i; }

    // Getters
    float getReal() { return this->real; }
    float getImaginary() { return this->imaginary; }

    // Display
    void display()
    {
        cout << "\nComplex Number: " << this->real << " + " << this->imaginary << "i";
    }

} Complex;
int main()
{
    Complex complex1, complex2;
    float real, imaginary;

    // Constructor call
    cout << "\nDefault Complex1 values:";
    complex1.display();
    // Constructor call
    cout << "\nDefault Complex2 values:";
    complex2.display();

    // Setters for Complex1
    cout << "\nEnter Real part: ";
    cin >> real;
    complex1.setReal(real);

    cout << "Enter Imaginary part: ";
    cin >> imaginary;
    complex1.setImaginary(imaginary);

    // Display Complex1 data
    complex1.display();

    // Getters for Complex1
    cout << "\nGetters Complex1";
    cout << "\nReal : " << complex1.getReal() << "\tImaginary : " << complex1.getImaginary();

    // Setters for Complex2
    cout << "\nEnter Real part: ";
    cin >> real;
    complex2.setReal(real);

    cout << "Enter Imaginary part: ";
    cin >> imaginary;
    complex2.setImaginary(imaginary);

    // Getters Complex2
    cout << "\nGetters Complex2";
    cout << "\nReal : " << complex2.getReal() << "\tImaginary : " << complex2.getImaginary();

    // Display Complex2 data
    complex2.display();

    return 1;
}
