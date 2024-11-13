#include <bits/stdc++.h>
#include <string>
using namespace std;
#pragma once
namespace ty
{

    class Marks
    {
    private:
        int Theory, Practical;

    public:
        Marks();
        Marks(int, int);
        int getTheory();
        int getPractical();
        // void display();
    };

}