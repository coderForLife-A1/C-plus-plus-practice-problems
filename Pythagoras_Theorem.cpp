// Input two sides of a right angled triangle and find the third side of the tiangle using Pythagoras theorem.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a, b;
    cout<<"Enter 1st side of the triangle: ";
    cin>>a;
    cout<<"Enter 2nd side of the triangle: ";
    cin>>b;

    double c = (pow(a, 2)+pow(b, 2));
    double d = pow(c, 0.5);

    cout<<"The 3rd side of the triangle is "<<d;
    return 0;
}