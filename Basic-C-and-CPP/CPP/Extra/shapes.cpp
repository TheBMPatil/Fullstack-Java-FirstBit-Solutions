#include <iostream>
using namespace std;
struct Vartul
{
private:
    float radious;

public:
    // Constructor
    Vartul(float red)
    {
        this->radious = red;
    }
    Vartul()
    {
        this->radious = 0;
    }

    // Setter
    void setRadious(float redious) { this->radious = radious; }
    // Getter
    float getRadious() { return this->radious; }
};

struct Trikon
{
private:
    float base;
    float height;

public:
    // Constructor
    Trikon(float base, float height)
    {
        this->base = base;
        this->height = height;
    }
    Trikon()
    {
        this->base = 0;
        this->height = 0;
    }
    // Seter
    void setBase(float base) { this->base = base; }
    void setHeight(float height) { this->height = height; }
    // Getter
    float getBase() { return this->base; }
    float getHeight() { return this->height; }
};

struct Aayat
{
private:
    float lambi;
    float width;

public:
    // Constructor
    Aayat(float lambi, float width)
    {
        this->lambi = lambi;
        this->width = width;
    }
    Aayat()
    {
        this->lambi = 0;
        this->width = 0;
    }
    // Setter
    void setWidth(float width) { this->width = width; }
    void setLambi(float lambi) { this->lambi = lambi; }
    // getter
    float getWidth() { return this->width; }
    float getLambi() { return this->lambi; }
};

struct Chauras
{
private:
    float baju;

public:
    // Constructor
    Chauras(float baju)
    {
        this->baju = baju;
    }
    Chauras()
    {
        this->baju = 0;
    }
    // Setter
    void setBaju(float baju) { this->baju = baju; }
    // Getter
    float getBaju() { return this->baju; }
};

struct Shapes
{
    // Area of Circle
    float calculateArea(Vartul V)
    {
        float PI = 3.14;
        return PI * (V.getRadious() * V.getRadious());
    }

    // Area of Trikon
    float calculateArea(Trikon T)
    {
        return (0.5) * T.getBase() * T.getHeight();
    }
    // Area of rectangle
    float calculateArea(Aayat A)
    {
        return A.getLambi() * A.getWidth();
    }
    // Area Of square
    float calculateArea(Chauras C)
    {
        return C.getBaju() * C.getBaju();
    }
};

int main()
{
    Shapes shape;

    Trikon trikon(12, 32);
    Vartul vartul(9);
    Aayat aayat(6, 8);
    Chauras chauras(10);

    cout << "\nArea Of Trikon : " << shape.calculateArea(trikon);
    cout << "\nArea Of Vartul : " << shape.calculateArea(vartul);
    cout << "\nArea Of Aayat : " << shape.calculateArea(aayat);
    cout << "\nArea Of Chauras : " << shape.calculateArea(chauras);
    return 0;
}
