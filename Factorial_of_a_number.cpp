// Input a number and print its factorial.

#include<iostream>
using namespace std;

int main()
{
    int n, p;
    int i = 1;
    cout<<"Enter the number: ";
    cin>>n;
    p=n;

    while (n>0)
    {
        i = i*n;
        n--;
    }
    cout<<"The factorial of "<<p<<" is "<<i;
    
    return 0;
}