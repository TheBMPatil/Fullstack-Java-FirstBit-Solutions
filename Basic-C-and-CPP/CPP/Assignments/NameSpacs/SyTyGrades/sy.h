#include <bits/stdc++.h>
using namespace std;

namespace sy
{

    class SyMarks
    {
    private:
        int ComputerTotal, MathsTotal, ElectronicsTotal;

    public:
        SyMarks();
        SyMarks(int, int, int);
        int getComputerTotal();
        int getMathsTotal();
        int getElectronicsTotal();
        void display();
    };

}