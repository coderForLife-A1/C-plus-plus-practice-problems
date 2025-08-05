// Input 3 numbers and print the largest number and if equal then print equal.

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;

    if (a>b && a>c)
    {
        cout<<"The largest number is: "<<a;
    }

    else if (b>a && b>c)
    {
        cout<<"The largest number is: "<<b;
    }
    
    else if (c>a && c>b)
    {
        cout<<"The largest number is: "<<c;
    }
    
    else if ((a==b) && (a==c))
    {
        cout<<"All the numbers are equal";
    }

    else if ((a==b) && (a>c))
    {
        cout<<"The largest number is: "<<a;
    }
    
    else if ((b==c) && (b>a))
    {
        cout<<"The largest number is: "<<b;
    }

    else if ((c==a) && (c>b))
    {
        cout<<"The largest number is: "<<c;
    }

    else if ((a==b) && (a<c))
    {
        cout<<"The largest number is: "<<c;
    }

    else if ((b==c) && (b<a))
    {
        cout<<"The largest number is: "<<a;
    }

    else if ((c==a) && (c<b))
    {
        cout<<"The largest number is: "<<b;
    }

    return 0;
}