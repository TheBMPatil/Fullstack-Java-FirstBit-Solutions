#include "ty.h"

namespace ty
{

    Marks::Marks()
    {
        this->Theory = 0;
        this->Practical = 0;
    }
    Marks::Marks(int Theory, int Practical)
    {
        this->Theory = Theory;
        this->Practical = Practical;
    }
    int Marks::getTheory()
    {
        return this->Theory;
    }
    int Marks::getPractical()
    {
        return this->Practical;
    }

    // void Marks::display()
    // {
    //     cout << ":: SY TOTAL MARKS ::\n";
    //     cout << "Theory = " << this->Theory << endl;
    //     cout << "Practical = " << this->Practical << endl;
    //     cout << "MathsTotal = " << this->MathsTotal << endl;
    // }

}