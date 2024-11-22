// 4. Display 1, 4, 10, 22, 46, 94……such series.

#include<iostream>

using namespace std;

int main()
{

    int num =1;
    int gap =3;

    while(num<=100)
    { 
        cout<<num<<" "; 
        num=(num+gap)-1;
        num++;
        gap = gap*2;

    }
}