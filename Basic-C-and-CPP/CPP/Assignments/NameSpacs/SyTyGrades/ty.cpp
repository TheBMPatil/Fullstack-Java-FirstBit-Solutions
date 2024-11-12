#include "ty.h"

namespace ty
{

    TyMarks::TyMarks()
    {
        this->Theory = 0;
        this->Practical = 0;
       
    }
    TyMarks::TyMarks(int Theory, int Practical)
    {
        this->Theory = Theory;
        this->Practical = Practical;
        
    }
    int TyMarks::getTheory()
    {
        return this->Theory;
    }
    int TyMarks::getPractical()
    {
        return this->Practical;
    }
    
    // void TyMarks::display()
    // {
    //     cout << ":: SY TOTAL MARKS ::\n";
    //     cout << "Theory = " << this->Theory << endl;
    //     cout << "Practical = " << this->Practical << endl;
    //     cout << "MathsTotal = " << this->MathsTotal << endl;
    // }

}