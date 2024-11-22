// 8. Accept number & count total digits of number.



#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int count =0;
    while(num > 0)
    {
        num= num/10;
        count++;

    }
    cout<<"count total digits of number : "<<count<<endl;
}