// Input the rows of numbers to find their determinant.

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter values of determinant in rowise order"<<endl;

    float a[9];
    for (int i=1; i<=9; i++)
    {
        cout<<"Enter element "<<i<<" : "<<endl;
        cin>>a[i];
    }

    float deter = a[1]*(a[5]*a[9] - a[6]*a[8]) - a[2]*(a[4]*a[9] - a[6]*a[7]) + a[3]*(a[4]*a[8] - a[5]*a[7]);
    
    cout<<"The determinat value is "<<deter<<endl;
    
    return 0;
}