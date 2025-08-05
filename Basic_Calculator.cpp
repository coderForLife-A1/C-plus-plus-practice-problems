// Input two numbers and one operator and find the result according to the input operator

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char c;

    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter the operator: ";
    cin>>c;

    switch (c)
    {
    case '+':
        cout<<"Addition of numbers is: "<<a+b;
        break;
    
    case '-':
        cout<<"Subtraction of numbers is: "<<a-b;
        break;

    case '*':
        cout<<"Multiplication of the numbers is: "<<a*b;
        break;

    case '/':
        cout<<"Division of the numbers is: "<<a/b;
        break;
    
    case '%':
        cout<<"Remainder on dividing the numbers is: "<<a%b;
        break;

    default:
        cout<<"Invalid operator";
        break;
    }
    return 0;
}