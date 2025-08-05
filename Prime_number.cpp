// Input a number and check whether the input number is prime or not.

#include<iostream>
using namespace std;

int main()
{
    int n=0;
    int f=0;
    cout<<"Enter a number: ";
    cin>>n;

    if (n<=1)
    {
        cout<<"The given number is not prime";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if ((n%i)==0)
            {
                f++;
            }
        }
    }
    
    if (f>2)
    {
        cout<<"The given number is not a prime number";
    }
    else
    {
        cout<<"The given number is a prime number";
    }
    
    return 0;
}

