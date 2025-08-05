// Input a number and check if the number is spy number or not.
// Spy no. ---> Sum and product of digits is equal.

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    int sum = 0;
    int pro = 1;
    cout<<"Enter a number: ";
    cin>>a;

    while (a != 0)
    {
        b = a%10;
        sum = sum+b;
        pro = pro*b;
        a = a/10;
    }
    if (sum == pro)
    {
        cout<<"The number is a spy number";
    }
    else
    {
        cout<<"The number is not a spy number";
    }
    
    return 0;
}