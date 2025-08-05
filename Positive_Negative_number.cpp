// Input a number and check whether the number is positive or negative.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Input a number: ";
    cin>>a;

    if (a>0)
    {
        cout<<"The number is positive";
    }
    
    else if (a==0)
    {
        cout<<"The number is neither positive nor negative";
    }
    else
    {
        cout<<"The number is negative";
    }
    
    return 0;
}