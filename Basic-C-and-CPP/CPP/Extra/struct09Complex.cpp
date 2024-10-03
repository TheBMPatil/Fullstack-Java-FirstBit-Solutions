#include <iostream>
#include <string.h>
using namespace std;

struct Complex
{
private:
	int real;
	int imaginary;

public:
	// Constructor
	Complex()
	{
		// cout << "\nDefault constructor called\n";
		this->real = 0;
		this->imaginary = 0;
	}

	Complex(int real, int imaginary)
	{
		// cout << "\nParameterized Constructor for Complex called\n";
		this->real = real;
		this->imaginary = imaginary;
	}

	// Setters
	void setReal(int r)
	{
		this->real = r;
	}
	void setImaginary(int i)
	{
		this->imaginary = i;
	}

	// Getters
	int getReal()
	{
		return this->real;
	}
	int getImaginary()
	{
		return this->imaginary;
	}

	// Display
	void display()
	{
		cout << "\nComplex Number: " << this->real << " + " << this->imaginary << "i";
	}

	// Addition
	Complex add(Complex c)
	{
		Complex temp;
		temp.real = this->real + c.getReal();
		temp.imaginary = this->imaginary + c.getImaginary();
		return temp;
	}
	Complex add(int a)
	{
		Complex temp;
		temp.real = this->real + a;
		temp.imaginary = this->imaginary + a;
		return temp;
	}

	// Substraction
	Complex sub(Complex c)
	{
		Complex temp;
		temp.real = this->real - c.getReal();
		temp.imaginary = this->imaginary - c.getImaginary();
		return temp;
	}

	Complex sub(int a)
	{
		Complex temp;
		temp.real = this->real - a;
		temp.imaginary = this->imaginary - a;
		return temp;
	}
	// Multiplication
	Complex mul(Complex c)
	{
		Complex temp;
		temp.real = this->real * c.getReal();
		temp.imaginary = this->imaginary * c.getImaginary();
		return temp;
	}

	Complex mul(int a)
	{
		Complex temp;
		temp.real = this->real * a;
		temp.imaginary = this->imaginary * a;
		return temp;
	}
	// Division
	Complex divide(Complex c)
	{
		Complex temp;
		temp.real = this->real / c.getReal();
		temp.imaginary = this->imaginary / c.getImaginary();
		return temp;
	}

	Complex divide(int a)
	{
		Complex temp;
		temp.real = this->real / a;
		temp.imaginary = this->imaginary / a;
		return temp;
	}
};

// Global Add
Complex add(int a, Complex c)
{
	printf("\nGlobal Add Fun");
	Complex temp;
	temp.setReal(a + c.getReal());
	temp.setImaginary(a + c.getImaginary());
	return temp;
}
// Global Sub
Complex sub(int a, Complex c)
{
	printf("\nGlobal Substract Fun");
	Complex temp;
	temp.setReal(a - c.getReal());
	temp.setImaginary(a - c.getImaginary());
	return temp;
}
// Global Mul
Complex mul(int a, Complex c)
{
	printf("\nGlobal Mul Fun");
	Complex temp;
	temp.setReal(a * c.getReal());
	temp.setImaginary(a * c.getImaginary());
	return temp;
}
// Global Divide
Complex divide(int a, Complex c)
{
	printf("\nGlobal Div Fun");
	Complex temp;
	temp.setReal(a / c.getReal());
	temp.setImaginary(a / c.getImaginary());
	return temp;
}

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

	// Addition
	Complex complex3 = complex1.add(complex2);
	cout << "\n\nAddition of C1 & C2 = ";
	complex3.display();

	printf("\nOverLoaded Add :\n");
	Complex complex4 = complex1.add(20);
	cout << "\nAddition of C1 & 20 = ";
	complex4.display();

	cout << "\nAddition  Global of 20 & C4 = ";
	Complex complex5 = add(20, complex4);
	complex5.display();

	printf("\n\nSubstraction :");

	cout << "\n of C1 & C2 = ";
	complex3 = complex1.sub(complex2);
	complex3.display();

	printf("\nOverLoaded Substract :\n");
	complex4 = complex1.sub(20);
	cout << "\nSubstract of C1 & 20 = ";
	complex4.display();

	cout << "\nSubstraction Global of 20 & C4 = ";
	complex5 = sub(20, complex4);
	complex5.display();

	printf("\n\n Multiplication :");

	cout << "\n of C1 & C2 = ";
	complex3 = complex1.mul(complex2);
	complex3.display();

	printf("\nOverLoaded Multiplication :\n");
	complex4 = complex1.mul(20);
	cout << "\nMultiplication of C1 & 20 = ";
	complex4.display();

	cout << "\nMultiplication Global of 20 & C4 = ";
	complex5 = mul(20, complex4);
	complex5.display();

	printf("\n\n Division :");

	cout << "\n of C1 & C2 = ";
	complex3 = complex1.divide(complex2);
	complex3.display();

	printf("\nOverLoaded Division :\n");
	complex4 = complex1.divide(20);
	cout << "\nDivision of C1 & 20 = ";
	complex4.display();

	cout << "\nDivision Global of 20 & C4 = ";
	complex5 = divide(20, complex4);
	complex5.display();
	return 1;
}
