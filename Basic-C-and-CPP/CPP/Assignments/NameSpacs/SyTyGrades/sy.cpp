#include "sy.h"

namespace sy
{

    SyMarks::SyMarks()
    {
        this->ComputerTotal = 0;
        this->ElectronicsTotal = 0;
        this->MathsTotal = 0;
    }
    SyMarks::SyMarks(int CompTTL, int EleTTL, int MathTTL)
    {
        this->ComputerTotal = CompTTL;
        this->ElectronicsTotal = EleTTL;
        this->MathsTotal = MathTTL;
    }
    int SyMarks::getComputerTotal()
    {
        return this->ComputerTotal;
    }
    int SyMarks::getElectronicsTotal()
    {
        return this->ElectronicsTotal;
    }
    int SyMarks::getMathsTotal()
    {
        return this->MathsTotal;
    }
    void SyMarks::display()
    {
        cout << ":: SY TOTAL MARKS ::\n";
        cout << "ComputerTotal = " << this->ComputerTotal << endl;
        cout << "ElectronicsTotal = " << this->ElectronicsTotal << endl;
        cout << "MathsTotal = " << this->MathsTotal << endl;
    }

}