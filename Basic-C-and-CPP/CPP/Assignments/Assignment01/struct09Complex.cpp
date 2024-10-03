#include <iostream>
#include <string.h>
using namespace std;

typedef struct Complex
{
    int real;
    int imaginary;

    // Constructor
    Complex()
    {
        cout << "\nDefault constructor called\n";
        this->real = 0;
        this->imaginary = 0;
    }

    Complex(int real, int imaginary)
    {
        cout << "\nParameterized Constructor for Complex called\n";
        this->real = real;
        this->imaginary = imaginary;
    }

public:
    // Setters
    void setReal(int r) { this->real = r; }
    void setImaginary(int i) { this->imaginary = i; }

    // Getters
    int getReal() { return this->real; }
    int getImaginary() { return this->imaginary; }

    // Display
    void display()
    {
        cout << "\nComplex Number: " << this->real << " + " << this->imaginary << "i";
    }
    Complex add(Complex c)
    {
        cout << "\nInside Add Function";
        Complex temp;
        temp.real = this->real + c.real;
        temp.imaginary = this->imaginary + c.imaginary;
        return temp;
    }

} Complex;
int main()
{
    Complex complex1, complex2(30, 49);
    int real, imaginary;

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

    // // Setters for Complex2
    // cout << "\nEnter Real part: ";
    // cin >> real;
    // complex2.setReal(real);

    // cout << "Enter Imaginary part: ";
    // cin >> imaginary;
    // complex2.setImaginary(imaginary);

    // // Getters Complex2
    // cout << "\nGetters Complex2";
    // cout << "\nReal : " << complex2.getReal() << "\tImaginary : " << complex2.getImaginary();

    // // Display Complex2 data
    // complex2.display();

    // Addition
    Complex complex3 = complex1.add(complex2);
    cout << "Addition of C1 & C2 = ";
    complex3.display();
    return 1;
}
