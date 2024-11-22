#include "sy.h"

namespace sy
{

    Marks::Marks()
    {
        this->ComputerTotal = 0;
        this->ElectronicsTotal = 0;
        this->MathsTotal = 0;
    }
    Marks::Marks(int CompTTL, int EleTTL, int MathTTL)
    {
        this->ComputerTotal = CompTTL;
        this->ElectronicsTotal = EleTTL;
        this->MathsTotal = MathTTL;
    }
    int Marks::getComputerTotal()
    {
        return this->ComputerTotal;
    }
    int Marks::getElectronicsTotal()
    {
        return this->ElectronicsTotal;
    }
    int Marks::getMathsTotal()
    {
        return this->MathsTotal;
    }
    void Marks::display()
    {
        cout << ":: SY TOTAL MARKS ::\n";
        cout << "ComputerTotal = " << this->ComputerTotal << endl;
        cout << "ElectronicsTotal = " << this->ElectronicsTotal << endl;
        cout << "MathsTotal = " << this->MathsTotal << endl;
    }

}