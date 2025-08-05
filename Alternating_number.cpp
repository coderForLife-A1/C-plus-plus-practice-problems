// Input a number and check if the number is alternating or not.
// Alternating no. ---> A number whose digits are even and odd alternatingly.

#include<iostream>
#include<math.h>
using namespace std;

bool isEvenOdd(int n)
{   
    int a, x, y;
    while(n=!0)
    {
        a=n/10;
        if (a%2==0)
        {
            if (x==1)
            return false;
            else
            x=1;
            y=0;
        }
        
        if (a%2==1)
        {
            if (y==1)
            return false;
            else
            y=1;
            x=0;
        }  
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    
    if (isEvenOdd(num))
    cout<<"Number is Alternating";
    else
    cout<<"Number is not Alternating";
    
    return 0;
}