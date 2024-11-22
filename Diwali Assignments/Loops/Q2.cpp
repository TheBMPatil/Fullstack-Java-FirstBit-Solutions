// 2. Display 0, 2, 4, 6…., 100 (Even Numbers).


#include<iostream>

using namespace std;

int main()
{

    int num =0;

    while(num<=100)
    {   
        if(num%2==0)
        cout<<num<<" ";
        num++;


    }
}