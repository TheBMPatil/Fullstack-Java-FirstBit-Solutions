#include <bits/stdc++.h>
#include <string>
using namespace std;
#pragma once
namespace sy
{

    class Marks
    {
    private:
        int ComputerTotal, MathsTotal, ElectronicsTotal;

    public:
        Marks();
        Marks(int, int, int);
        int getComputerTotal();
        int getMathsTotal();
        int getElectronicsTotal();
        void display();
    };

}