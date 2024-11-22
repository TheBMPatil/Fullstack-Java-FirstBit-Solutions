// 4. Infosys want’s to hire a Driver having following criteria’s.
// a.Age must be Greater than 40.
// b.Driving Experience Greater than 10 Years.
// c.12 Mark’s Greater than 60.
// th
// Take driver’s detail and display he is eligible job


// 2. Accept 6 different number’s & display Larger number.

#include<iostream>
using namespace std;
int main ()
{
    int mark , age,experiance ;
    cout<<"Infosys Driver Criteria ";
    cout <<"Enter Your Age ";
    cin>>age;
    cout<<"Enter Your Driving Experiance ";
    cin>>experiance;
    cout<<"Enter Your 12th Marks ";
    cin>>mark;

    if(mark>=60 && age>=40 && experiance >=10)
    {
        cout<<"Congrats You Selected As Infoysys Driver ";
    }
    else {
    cout<<"your Not Eligible ! You Failed As Driver  ";
    }
    

}