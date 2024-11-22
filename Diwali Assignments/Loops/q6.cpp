// 6. Display Fibonacci Series for given number.



#include<iostream>
using namespace std;

int main()
{
    int past =0;
    int now =1;
    int range ;
    cout<<"Enter a Range to Calculate Fibonacci Series : ";
    cin>>range ;


    if(range>=1)
    cout<< past <<endl;
    if(range>=2)
    cout<< now <<endl;

    int count = range-2;




    while(count >0)
    {
        int next = past + now ;
        cout<<next<<endl;


        past = now;
        now = next;
        count--;       


    }
}