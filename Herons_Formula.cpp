// Input the sides of a triangle and calculate the area of the triangle using heron's formula.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a, b, c, s;
    cout<<"Enter the 1st side of the triangle: ";
    cin>>a;
    cout<<"Enter the 2nd side of the triangle: ";
    cin>>b;
    cout<<"Enter the 3rd side of the triangle: ";
    cin>>c;

    s = (a + b + c)/2;
    double area = s*((s-a)*(s-b)*(s-c));
    double areax = pow(area, 0.5);
    cout<<"The area of the triangle is "<<areax;

    return 0;
}