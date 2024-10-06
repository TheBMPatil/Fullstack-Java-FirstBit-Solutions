#include <iostream>
#include <string.h>
using namespace std;

struct Shapes
{
    char shapeName[20];
    virtual float calculateArea()
    {
        cout << "\nShapes CalculateArea called\n";
        return 0;
    }
    // void draw()
    virtual void draw()
    {
        cout << "\nShape Draw called\n";
    }
};

struct Vartul : public Shapes
{
private:
    float radious;

public:
    // Constructor
    Vartul(float red)
    {
        this->radious = red;
        strcpy(this->shapeName, "Vartul");
    }
    Vartul()
    {
        strcpy(this->shapeName, "Vartul");
        this->radious = 0;
    }

    // Setter
    void setRadious(float radious) { this->radious = radious; }
    // Getter
    float getRadious() { return this->radious; }
    // Area of Circle
    float calculateArea() override
    {
        return 3.14 * (this->radious * this->radious);
    }
    virtual void draw()
    {
        cout << "\nVartul Draw called\n";
    }
};

struct Trikon : public Shapes
{
private:
    float base;
    float height;

public:
    // Constructor
    Trikon(float base, float height)
    {
        strcpy(this->shapeName, "Trikon");
        this->base = base;
        this->height = height;
    }
    Trikon()
    {
        strcpy(this->shapeName, "Trikon");
        this->base = 0;
        this->height = 0;
    }
    // Setter
    void setBase(float base) { this->base = base; }
    void setHeight(float height) { this->height = height; }
    // Getter
    float getBase() { return this->base; }
    float getHeight() { return this->height; }

    // Area of Trikon
    float calculateArea() override
    {
        return (0.5) * this->base * this->height;
    }
    virtual void draw()
    {
        cout << "\nTrikon Draw called\n";
    }
};

struct Aayat : public Shapes
{
private:
    float lambi;
    float width;

public:
    // Constructor
    Aayat(float lambi, float width)
    {
        strcpy(this->shapeName, "Aayat");
        this->lambi = lambi;
        this->width = width;
    }
    Aayat()
    {
        strcpy(this->shapeName, "Aayat");
        this->lambi = 0;
        this->width = 0;
    }
    // Setter
    void setWidth(float width) { this->width = width; }
    void setLambi(float lambi) { this->lambi = lambi; }
    // getter
    float getWidth() { return this->width; }
    float getLambi() { return this->lambi; }

    // Area of rectangle
    float calculateArea() override
    {
        return this->lambi * this->width;
    }
    virtual void draw()
    {
        cout << "\nAayat Draw called\n";
    }
};

struct Chauras : public Shapes
{
private:
    float baju;

public:
    // Constructor
    Chauras(float baju)
    {
        this->baju = baju;
        strcpy(this->shapeName, "Chauras");
    }
    Chauras()
    {
        this->baju = 0;
        strcpy(this->shapeName, "Chauras");
    }
    // Setter
    void setBaju(float baju) { this->baju = baju; }
    // Getter
    float getBaju() { return this->baju; }

    // Area Of square
    float calculateArea() override
    {
        return this->baju * this->baju;
    }
    virtual void draw()
    {
        cout << "\nChauras Draw called\n";
    }
};

int main()
{
    Shapes *shape[5];
    shape[0] = new Trikon(12, 10);
    shape[1] = new Vartul(9);
    shape[2] = new Aayat(10, 12);
    shape[3] = new Chauras(12);

    for (int i = 0; i < 4; i++)
    {
        cout << "\nArea Of Shape " << shape[i]->shapeName << " : " << shape[i]->calculateArea();
        // cout << "\n......................................\n";
        shape[i]->draw();
        cout << "\n......................................\n";
    }

    // Trikon trikon(12, 32);
    // Vartul vartul(9);
    // Aayat aayat(6, 8);
    // Chauras chauras(10);

    // shape = &trikon;
    // cout << "\nArea Of Trikon : " << shape->calculateArea();

    // shape = &vartul;
    // cout << "\nArea Of Vartul : " << shape->calculateArea();

    // shape = &aayat;
    // cout << "\nArea Of Aayat : " << shape->calculateArea();

    // shape = &chauras;
    // cout << "\nArea Of Chauras : " << shape->calculateArea();

    return 0;
}

// #include <iostream>

// using namespace std;

// struct Shapes
// {

//     virtual float calculateArea()
//     {
//         cout << "\nShapes CalculateArea called\n";
//         return 0;
//     }
// };
// struct Vartul : public Shapes
// {
// private:
//     float radious;

// public:
//     // Constructor
//     Vartul(float red)
//     {
//         this->radious = red;
//     }
//     Vartul()
//     {
//         this->radious = 0;
//     }

//     // Setter
//     void setRadious(float r) { this->radious = radious; }
//     // Getter
//     float getRadious() { return this->radious; }
//     // Area of Circle
//     float calculateArea()
//     {
//         return 3.14 * (this->radious * this->radious);
//     }
// };

// struct Trikon : public Shapes
// {
// private:
//     float base;
//     float height;

// public:
//     // Constructor
//     Trikon(float base, float height)
//     {
//         this->base = base;
//         this->height = height;
//     }
//     Trikon()
//     {
//         this->base = 0;
//         this->height = 0;
//     }
//     // Seter
//     void setBase(float base) { this->base = base; }
//     void setHeight(float height) { this->height = height; }
//     // Getter
//     float getBase() { return this->base; }
//     float getHeight() { return this->height; }

//     // Area of Trikon
//     float calculateArea()
//     {
//         return (0.5) * this->base * this->height;
//     }
// };

// struct Aayat : public Shapes
// {
// private:
//     float lambi;
//     float width;

// public:
//     // Constructor
//     Aayat(float lambi, float width)
//     {
//         this->lambi = lambi;
//         this->width = width;
//     }
//     Aayat()
//     {
//         this->lambi = 0;
//         this->width = 0;
//     }
//     // Setter
//     void setWidth(float width) { this->width = width; }
//     void setLambi(float lambi) { this->lambi = lambi; }
//     // getter
//     float getWidth() { return this->width; }
//     float getLambi() { return this->lambi; }

//     // Area of rectangle
//     float calculateArea()
//     {
//         return this->lambi * this->width;
//     }
// };

// struct Chauras : public Shapes
// {
// private:
//     float baju;

// public:
//     // Constructor
//     Chauras(float baju)
//     {
//         this->baju = baju;
//     }
//     Chauras()
//     {
//         this->baju = 0;
//     }
//     // Setter
//     void setBaju(float baju) { this->baju = baju; }
//     // Getter
//     float getBaju() { return this->baju; }

//     // Area Of square
//     float Shapes::calculateArea()
//     {
//         return this->baju * this->baju;
//     }
// };

// int main()
// {
//     Shapes shape;

//     Trikon trikon(12, 32);
//     Vartul vartul(9);
//     Aayat aayat(6, 8);
//     Chauras chauras(10);

//     cout << "\nArea Of Shape : " << shape.calculateArea();
//     cout << "\nArea Of Trikon : " << trikon.calculateArea();
//     cout << "\nArea Of Vartul : " << vartul.calculateArea();
//     cout << "\nArea Of Aayat : " << aayat.calculateArea();
//     cout << "\nArea Of Chauras : " << chauras.calculateArea();
//     return 0;
// }
