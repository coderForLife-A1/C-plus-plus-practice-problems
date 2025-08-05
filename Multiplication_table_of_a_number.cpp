// Input a number and print the multiplication table of that number.

#include<iostream>
using namespace std;

int main()
{
    int a;
    int i = 0;
    cout<<"Enter a number: ";
    cin>>a;

    while (i<=10)
    {
        cout<<a*i<<endl;
        i++;
    }
    
    
    return 0;
}