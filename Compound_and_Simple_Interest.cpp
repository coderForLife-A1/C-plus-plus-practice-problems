// Input the principal amount, rate and time to calculate the simple and compound interest.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double p, r, t;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of investment in percentage: ";
    cin>>r;
    cout<<"Enter duration of investment in years: ";
    cin>>t;
    cout<<endl;

    // Simple Interest
    double si = (p*r*t)/100;
    cout<<"Simple Interest:"<<endl;
    cout<<"Your amount after "<<t<<" years will become: "<<si+p<<endl;
    cout<<endl;

    // Compund Interest
    double x = (1+r/1200);
    double ci = p*(pow(x, t*12));
    cout<<"Compound interest:"<<endl;
    cout<<"Your amount after "<<t<<" years will become: "<<ci;

    return 0;
}