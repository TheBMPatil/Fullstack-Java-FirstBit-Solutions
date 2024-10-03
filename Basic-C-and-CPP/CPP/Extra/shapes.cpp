#include <iostream>
using namespace std;
struct Vartul
{
private:
    float radious;

public:
    Vartul(float red)
    {
        this->radious = red;
    }
    void setRadious(float redious) { this->radious = radious; }

    float getRadious() { return this->radious; }
};

struct Trikon
{
private:
    float base;
    float height;

public:
    Trikon(float base, float height)
    {
        this->base = base;
        this->height = height;
    }

    void setBase(float base) { this->base = base; }
    void setHeight(float height) { this->height = height; }

    float getBase() { return this->base; }
    float getHeight() { return this->height; }
};

struct Aayat
{
private:
    float lambi;
    float width;

public:
    Aayat(float lambi, float width)
    {
        this->lambi = lambi;
        this->width = width;
    }

    void setWidth(float width) { this->width = width; }
    void setLambi(float lambi) { this->lambi = lambi; }

    float getWidth() { return this->width; }
    float getLambi() { return this->lambi; }
};

struct Chauras
{
private:
    float baju;

public:
    Chauras(float baju)
    {
        this->baju = baju;
    }

    void setBaju(float baju) { this->baju = baju; }
    float getBaju() { return this->baju; }
};

struct Shapes
{

    float calculateArea(Vartul V)
    {
        float PI = 3.14;
        return PI * (V.getRadious() * V.getRadious());
    }

    float calculateArea(Trikon T)
    {

        return (0.5) * T.getBase() * T.getHeight();
    }
    float calculateArea(Aayat A)
    {
        return A.getLambi() * A.getWidth();
    }
    float calculateArea(Chauras c)
    {
        return c.getBaju() * c.getBaju();
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
