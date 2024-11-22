// 2. Accept 6 different number’s & display Larger number.

#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e,f;
    cout<<"Enter 6 the Numbers\n";
    cin>>a>>b>>c>>d>>e>>f;

    int large=a;
    if(b>large)
    large =b;
    // cout<<b<<"Is the largest No.";
     if(c>large)
      large = c;
    // cout<<c<<"Is the largest No.";
     if(d>large)
     large =d;
    // cout<<d<<"Is the largest No.";
     if(e>large)
     large = e;
    // cout<<e<<"Is the largest No.";
     if(f>large)
     large = f;
    cout<<large <<" Is the largest No.";







}