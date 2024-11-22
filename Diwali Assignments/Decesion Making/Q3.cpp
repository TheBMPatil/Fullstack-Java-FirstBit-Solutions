// 2. Accept 6 different number’s & display smallr number.

#include<iostream>
using namespace std;
int main ()
{
   int a,b,c,d,e,f;
    cout<<"Enter 6 the Numbers\n";
    cin>>a>>b>>c>>d>>e>>f;


    int small=a;
    if(b<small)
    small =b;
    // cout<<b<<"Is the smallst No.";
     if(c<small)
      small = c;
    // cout<<c<<"Is the smallst No.";
     if(d<small)
     small =d;
    // cout<<d<<"Is the smallst No.";
     if(e<small)
     small = e;
    // cout<<e<<"Is the smallst No.";
     if(f<small)
     small = f;
    cout<<small <<" Is the smalelst No.";







}