// 1. Accept Mark’s & display Grades eg.75 above A grade, 65 above B
// grade,fail

#include<iostream>
using namespace std;

int main()
{
    int mark ;
    cout <<"Enter your Marks ";
    cin>>mark;

    if(mark >=75)
    {
     cout<<"Your Grade Is : A ";

    }
    else if(mark >=65 )
    {
     cout<<"Your Grade Is : B ";
    }
    else if(mark<65)
    {
     cout<<"You Failed As Student ";

    }
}

