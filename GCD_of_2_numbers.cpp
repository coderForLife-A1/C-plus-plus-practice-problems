#include<iostream>
using namespace std;

int gcd(int l, int m)
{
    int x = min(l,m);   // Returns the smaller value
    while (x>1)
    {
        if(l%x==0 && m%x==0)
        break;
        x--;
    }
    return x;
}

int main()
{
    int a, b;
    cout<<"Enter number: ";
    cin>>a>>b;

    cout<<gcd(a, b);
    return 0;
}