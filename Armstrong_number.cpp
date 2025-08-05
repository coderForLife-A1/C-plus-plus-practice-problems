// Input a number and check whether the number is an armstrong number or not.
// Armstrong no. ---> sum of cubes of each digit is equal to the number.

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    int num = 0;
    cout<<"Enter a number: ";
    cin>>a;

    c = a;
    while (a!=0)
    {
        b = a%10;
        num = num+(b*b*b);
        a = a/10;
    }
    if (num == c)
    {
        cout<<"The number is a armstrong number";
    }
    else
    {
        cout<<"The number is not an armstrong number";
    }
        
    return 0;
}