#include <iostream>
#include <string.h>
using namespace std;

struct Complex {
	private:
		int real;
		int imaginary;

	public:
	
		Complex() {
			this->real = 0;
			this->imaginary = 0;
		}

		Complex(int real, int imaginary) {
			this->real = real;
			this->imaginary = imaginary;
		}

		// Setters
		void setReal(int r) {
			this->real = r;
		}
		void setImaginary(int i) {
			this->imaginary = i;
		}

		// Getters
		int getReal() {
			return this->real;
		}
		int getImaginary() {
			return this->imaginary;
		}

		// Display
		void display() {
			cout << "\nComplex Number: " << this->real << " + " << this->imaginary << "i";
		}

		// Addition
		Complex operator+(Complex c) {
			Complex temp;
			temp.real = this->real + c.getReal();
			temp.imaginary = this->imaginary + c.getImaginary();
			return temp;
		}
		Complex operator+(int a) {
			Complex temp;
			temp.real = this->real + a;
			temp.imaginary = this->imaginary + a;
			return temp;
		}
		
			int operator>(Complex c) {
		
		if(this->real>c.getReal())
			return 1;
		else
			return 0;		
			
		}
		
		
		Complex operator++(int a)
		{
			Complex temp;
			int x=this->real++;
			int y=this->imaginary++;
			temp.setReal(x);
			temp.setImaginary(y);
			return temp;
		}
		
		Complex operator++()
		{
			Complex temp;
			int x=++this->real;
			int y=++this->imaginary;
			temp.setReal(x);
			temp.setImaginary(y);
			return temp;
		}
	
};

// Global Add
Complex xyz(int a, Complex c) {
	printf("\nGlobal Add Fun");
	Complex temp;
	temp.setReal(a + c.getReal());
	temp.setImaginary(a + c.getImaginary());
	return temp;
}


int main() {

	Complex c1(10,20),c2(30,40);
	
	Complex c3;

	c3=++c1; //c1.operator++(int);
	c1.display();
	c3.display();
	
	
	
//	c3=++c1;//c1.operator++();
	return 1;
}
