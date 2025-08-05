// Input a number and print its factors.

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter a number: ";
    cin>>a;

    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}